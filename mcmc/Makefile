INCLUDE=-I$(HOME)/.local/lib/sprng5/include
LIB=-L$(HOME)/.local/lib/sprng5/lib

all: monte-carlo mcmc gsl_demo gsl-sprng_demo gsl-sprng_demo

gsl_demo: gsl_demo.c
	gcc gsl_demo.c -o gsl_demo -lgsl -lgslcblas

sprng_demo: sprng_demo.c
	mpiCC $(INCLUDE) $(LIB) -o sprng_demo sprng_demo.c -lsprng -lgmp

gsl-sprng_demo: gsl-sprng_demo.c
	mpiCC $(INCLUDE) $(LIB) -o gsl-sprng_demo gsl-sprng_demo.c -lsprng -lgmp -lgsl -lgslcblas

mcmc: mcmc.c
	mpiCC $(INCLUDE) $(LIB) -o mcmc mcmc.c -lsprng -lgmp -lgsl -lgslcblas

monte-carlo: monte-carlo.c
	mpiCC $(INCLUDE) $(LIB) -o monte-carlo monte-carlo.c -lsprng -lgmp -lgsl -lgslcblas

clean:
	rm -vf monte-carlo mcmc sprng_demo gsl-sprng_demo gsl_demo chain-*

