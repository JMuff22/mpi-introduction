## Collective operations

In this exercise we test different routines for collective communication.

Write a program for four MPI tasks. Each task should have a data vector with
the values initialised to:

![](https://raw.githubusercontent.com/csc-training/summerschool/master/mpi/collectives/img/sendbuffer.png)

In addition, each task has a receive buffer for eight elements and the
values in the buffer are initialised to -1.

Implement communication that sends and receives values from the data
vectors to the receive buffers using a single collective routine in
each case, so that the receive buffers will have the following values.
You can start from scratch or use the skeleton code found in
[c/skeleton.c](c/skeleton.c) or [fortran/skeleton.F90](fortran/skeleton.F90).

### Case 1

![](https://raw.githubusercontent.com/csc-training/summerschool/master/mpi/collectives/img/bcast.png)

### Case 2

![](https://github.com/csc-training/summerschool/blob/master/mpi/collectives/img/scatter.png)

### Case 3

![](https://raw.githubusercontent.com/csc-training/summerschool/master/mpi/collectives/img/gatherv.png)

### Case 4

![](https://raw.githubusercontent.com/csc-training/summerschool/master/mpi/collectives/img/alltoall.png)
