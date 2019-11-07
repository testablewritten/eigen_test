# Pseudo_inverse_using_QR_Factorizaion

## written by Sanghyun Kim

### original source code:   https://github.com/ggory15/Pseudo_inverse_using_QR_Factorizaion.git

#### edited by Jeeseop Kim

This is a example code to compare the computation performance between Pseudo inverse using QR Factorization and SVD.

(In newest Eigen library, there is psuedo inverse function using QR factorizaition. see "CompleteOrthogonalDecomposition" class)

In general, a pseudo inverse of a big sized matrix (i.e. 24 x 24) using Singular Vector Decomposition(SVD) has heavy calculation cost.

However, the computation time with QR factorization for pseudo inverse is much shorter than that with SVD.

I tested a few of cases including 
1) squared matrix with row rank-deficient or column rank-deficient.
2) thin matrix with column rank-deficient.
3) fat matrix with row rank-deficient.

## Running the test code
### Code is edited to be worked in Ubuntu 16.04

Make the .o file

```
g++ source.cpp -o source
```

execute .o file

```
./source
```

```Dependancy: Eigen Library (more than 3.0.0)```


