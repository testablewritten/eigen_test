# Eigen Test simple code collection

## Don't forget changing the Eigen directory to the suitable one

> Download manually
- When you download the Eigen, tar.gz or zip file has all source code of Eigen under __Eigen__ folder
- Including this __Eigen__ folder with suitable directory setting gives all functions of Eigen

> Using apt
```sh
$ sudo apt install libeigen3-dev
```
- This command installs the Eigen files under __/usr/include/eigen3__
- This route also helps using Eigen with cmake a little bit easier

## eigen_sparse_mtx_test

- test how to convert dense matrix to sparse matrix
- test how to compress sparse matrix
- test how to get the Compressed Column Storage(ccs) using compressed sparse matrix
- test how to get a permutation
- test how to get a the matrix size

## Pseudo_inverse_using_QR_Factorizaion

- This is a example code to compare the computation performance between Pseudo inverse using QR Factorization and SVD.
- (In newest Eigen library, there is psuedo inverse function using QR factorizaition. see "CompleteOrthogonalDecomposition" class)
- In general, a pseudo inverse of a big sized matrix (i.e. 24 x 24) using Singular Vector Decomposition(SVD) has heavy calculation cost.
- However, the computation time with QR factorization for pseudo inverse is much shorter than that with SVD.
- I tested a few of cases including 
-- 1) squared matrix with row rank-deficient or column rank-deficient.
-- 2) thin matrix with column rank-deficient.
-- 3) fat matrix with row rank-deficient.
