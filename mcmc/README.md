## Parallel Markov Chain Monte Carlo

Source: https://darrenjw.wordpress.com/2010/12/14/getting-started-with-parallel-mcmc/

### Prerequisites

Get GSL on Linux with 
```
sudo apt-get install gsl-bin libgsl0-dev
```

Get SPRNG

Download and guide from: http://www.sprng.org/Version5.0/quick-start.html

```
cd ~/Downloads/
tar xjf sprng5.tar.bz2
mv sprng5 $HOME/libs
cd ~/$HOME/libs/sprng5
```

To install:

In SPRNG directory

```
./configure
make
```

** You may have to update the Include and Lib flags in the `Makefile` **
You can also copy the header files to your default include path and lib path.  

Get `gsl-sprng.h` file

```
wget https://www.staff.ncl.ac.uk/d.j.wilkinson/software/gsl-sprng.h
```

### Running

To make the binaries 

```
make all
```


### More info

Please see 

https://darrenjw.wordpress.com/2010/12/14/getting-started-with-parallel-mcmc/