# Euler-Pi-Series

Leonhard Euler's infinite value of Pi using infinite series

Equation that was followed:

$$ \frac{\pi^4}{90} = \sum_{i=1}^n \frac{1}{(i^4)} $$

Rearranged to solve for $\pi$

$$ \pi = \sqrt[4]{90(\sum_{i=1}^n \frac{1}{(i^4)})} $$

##  Execute program
compile the program using the following command in the command line
```bash
gcc pi_calc.c -o pi-series
```

execute the program
```bash
./pi-series
```

