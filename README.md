# condorTrigonometryDS
Condor practice done in Distributed Systems course at Univalle - 2016-2

Students: Alejandro Valdés and María Claudia Santamaría

## Project Content

### C files
* `random_angle.c` program that generates the angle and writes its value in a file called `angle.txt` 

* `calc_sine.c` program that calculates the sine for the angle included in `angle.txt`. 
The result is written in `sineresult.txt`

* `calc_cosine.c` program that calculates the cosine for the angle included in `angle.txt`. 
The result is written in `cosineresult.txt`

* `collect.c` program that sums up sine and consine results. The input values are read from 
`sineresult.txt` and `cosineresult.txt`, and the sum is written in standard output 

### Condor files
* `angle.condor` specification for running `random_angle`
* `sine.condor` specification for running `calc_sine`
* `cosine.condor` specification for running `calc_cosine`
* `collect.condor` specification for running `collect`
* `trigonometry.dag` specification for running multiple jobs. The first execution must be `angle.condor` given that
`sine.condor` and `cosine.condor` (which are executed next) depend on the angle generation. The last execution must be
`collect.condor` due to it requires sine and cosine values

### Makefile
This file includes directives for compiling and running
