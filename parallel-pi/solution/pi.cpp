#include <cstdio>
#include <cmath>
#include <mpi.h>
#include <chrono>
using namespace std::chrono;

constexpr int n = 840;

int main(int argc, char** argv)
{
   auto start1 = high_resolution_clock::now();
   double start2 = MPI_Wtime();
   int myid, ntasks, name_len;

   MPI_Status status;

   MPI_Init(&argc, &argv);
   MPI_Comm_size(MPI_COMM_WORLD, &ntasks);
   MPI_Comm_rank(MPI_COMM_WORLD, &myid);
   char processor_name[MPI_MAX_PROCESSOR_NAME];
   MPI_Get_processor_name(processor_name, &name_len);

   if (0 == myid) {
      printf("Computing approximation to pi with N=%d\n", n);
      printf("Using %d MPI processes\n", ntasks);
   }

   int chunksize = n / ntasks;
   int istart = myid * chunksize + 1;
   int istop = (myid + 1) * chunksize;

   // std::cout << "Chucksize: " << chunksize << std::endl;
   // std::cout << "istart: " << chunksize << std::endl;
   // std::cout << "istop: " << chunksize << std::endl;

   // Handle possible uneven division
   int remainder = n % ntasks;
   if (remainder > 0) {
      std::cout << "uneven division" << std::endl;
       if (myid < remainder) {
          // Assign this task one element more
          istart += myid;
          istop += myid + 1;
       } else {
          istart += remainder;
          istop += remainder;
       }
    }
         
   double localpi = 0.0;
   for (int i=istart; i <= istop; i++) {
     double x = (i - 0.5) / n;

     localpi += 1.0 / (1.0 + x*x);
     // std::cout << localpi << std::endl;
   }

   // std::cout << "istart2: " << chunksize << std::endl;
   // std::cout << "istop2: " << chunksize << std::endl;

   // Reduction to rank 0
   if (0 == myid) {
      double pi = localpi;
      for (int i=1; i < ntasks; i++) {
        MPI_Recv(&localpi, 1, MPI_DOUBLE, MPI_ANY_SOURCE, 0, MPI_COMM_WORLD, &status);
        pi += localpi;
      }
      pi *= 4.0 / n;
      double diff = pi-M_PI;
      printf("Approximate pi=%18.16f (exact pi=%10.8f), percentage diff=%10.16f %% \n", pi, M_PI, (M_PI/pi)*100);
   } else {
      MPI_Send(&localpi, 1, MPI_DOUBLE, 0, 0, MPI_COMM_WORLD);
   }

   MPI_Finalize();
   double end = MPI_Wtime();
   auto stop1 = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop1 - start1);
   std::cout << "Process " << myid << " took " << (end - start2)*1000000 << " seconds to run." << std::endl;
   std::cout << "Time taken by function: "
         << duration.count() << " microseconds" << std::endl;
   return 0;

}
   

