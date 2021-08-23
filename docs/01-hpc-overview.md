---
title: Overview of High Performance Computing
author: CSC Training
date:   2021
lang:   en
---

# What is high-performance computing?

- Utilising computer power that is much larger than available in
  typical desktop computer
- Performance of HPC system (i.e. supercomputer) is often measured in
  floating point operations per second (flop/s)
    - For software, other measures can be more meaningful
- Currently, the most powerful system reaches ~500 x 10<sup>15</sup> flop/s
  (500 Pflop / s)

# What is high-performance computing?

 ![](img/cray.png){.center width=30%}

# Top 500 list

 ![](img/top_500.png){.center width=50%}

# What are supercomputers used for? {.section}


# Materials science

<div class=column>
- New materials
    - Design of meta-materials
    - Hydrogen storage
- New methods for catalysis
    - Industrial processes
    - Air and water purification
- Design of devices from first principles
</div>
<div class=column>

![](img/mat.png){.center width=80%}

</div>

# Life sciences

<div class=column>
- Next-generation sequencing techniques
- Identifying genomic variants associated with common complex diseases
- Understanding the natural development of diseases
- Medical imaging and diagnostics
- Simulated surgeries
- Predicting protein folding
</div>
<div class=column>

 ![](img/life.png){.center width=80%}

</div>

# Earth sciences

<div class=column>
- Long term climate modeling
    - Coupling atmospheric, ocean and land models
    - Understanding and predicting the climate change
- High-resolution weather prediction
    - Predicting extreme weather conditions
    - District-scale forecasts
    - Ensembles
- Whole-Earth seismological models
</div>
<div class=column>

 ![](img/earth.png){.center width=80%}

</div>

# Artificial intelligence

<div class=column>
- Machine learning
    - deep neural networks
- Large scale data analysis
- Interpreting experimental data
- Prediction of material properties

</div>
<div class=column>

 ![](img/ai.png){.center width=80%}

</div>



# Puhti vs. the Coronavirus. COVID-19 fast track
- 2/3 of the Puhti's cores allocated
- 15 research project
- 3 areas:
     - airborne transmission
     - looking medication
     - identifying new variants

# Airborne transmission of coronavirus

<div class=column>
- consortium of fluid dynamics physicists, virologists and biomedical engineering specialists
- to model how the extremely small droplets are transported in air currents
- to asses the implications for coronavirus infections
</div>
<div class=column>

 ![](img/covid_aerosol.jpg){.center width=80%}

</div>
- to be able to make scientific based recommendations for policy makers

# The functional mechanism of the main protease
<div class=column>
- atomistic molecular dynamics simulations and machine learning techniques
- to unveil the mechanism of action of the main protease of the SARS-COV-2 virus.
- figure out how the two proteins dimerize and how their binding could be blocked.
</div>
<div class=column>

 ![](img/ilpo.jpg){.center width=80%}

</div>
- investigate how drug candidates interfere with this this binding or blocks the enzyme activation

#  Monitoring of the virus variants

- identifying virus variants requires significant computational power
- increase the sequencing capacity
- Puhti supercomputer and the in-built virtual analysis workflow


# Utilizing HPC in scientific research

 ![](img/sci.svg){.center width=40%}


# What are supercomputers made of? {.section}


# CPU frequency development
- Power consumption of CPU: `~`f^3

 ![](img/freq.png){.center width=60%}

# Parallel processing

- Modern (super)computers rely on parallel processing
- Nodes **multiple** CPU cores
    - Latency `~`1 µs, bandwidth `~`200 Gb / s
    - `#`1 system has `~`10 000 000 cores
- Vectorization
    - Single instruction can process multiple data (SIMD)
- Pipelining
    - Core executes different parts of instructions in parallel
- Accelerators
    - GPUs


# Anatomy of supercomputer
 ![](img/cluster_diagram.jpeg){.center width=80%}
 
# From laptop to Tier-0
<div class=column>

 ![](img/tier.svg){.center width=80%}

</div>
<div class=column>
- The most fundamental difference between a small university cluster
  and Tier-0 supercomputer is the number of nodes
    - The interconnect in high end systems is often also more capable
</div>

# Cloud computing

- Cloud infrastructure is run on top of normal HPC system:
    - Shared memory nodes connected by network
- User obtains **virtual** machines
- Infrastructure as a service (IaaS)
    - User has full freedom (and responsibility) of operating system
      and the whole software environment
- Platform as a service (PaaS)
    - User develops and runs software within the provided environment


# Cloud computing and HPC

- Suitability of cloud computing for HPC depends heavily on application
    - Single node performance is often ok
- Virtualization adds overhead especially for the networking
    - Some providers offer high-speed interconnects with a higher price
- Moving data out from the cloud can be expensive
- Currently, cloud computing is not very cost-effective solution for
  most large scale HPC simulations

# Future of High-performance computing {.section}


# Exascale challenge

- Performance of supercomputers has increased exponentially for a long time
- However, there are unprecedented challenges in reaching exascale
  (1 x 10<sup>18</sup> flop/s)
    - Power consumption: scaling current `#`1 energy efficient system
      would still require `~`60 MW
    - Fault tolerance: with current technology exascale system
      experiences hardware failure every few hours
    - Application scalability: how to program for 100 000 000 cores?

# Quantum computing

- Quantum computers can solve certain types of problems exponentially
  faster than classical computers
- General purpose quantum computer is still far away
- For optimisation problems, D-Wave computer based on quantum
  annealing is already commercially available
