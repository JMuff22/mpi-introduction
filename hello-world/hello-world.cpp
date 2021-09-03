#include <cstdio>
#include <mpi.h>

int main(int argc, char *argv[])
{
    int ntasks, nrank, name_len;
    // TODO: say hello! in parallel
    MPI_Init(&argc, &argv);
    
    // Get number of tasks
    MPI_Comm_size(MPI_COMM_WORLD, &ntasks);
    // Get rank of tasks
    MPI_Comm_rank(MPI_COMM_WORLD, &nrank);
    // Get processor name
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    MPI_Get_processor_name(processor_name, &name_len);

    printf("In total there are %i tasks\n", ntasks);

    printf("Hello from processor %s, rank %d out of %d processors\n", processor_name, nrank, ntasks);


    MPI_Finalize();

}
