#include <iostream>
#include "/home/kavehakbarihamed/Eigen/Dense"
#include "/home/kavehakbarihamed/Eigen/Sparse"
#include "/home/kavehakbarihamed/Eigen/OrderingMethods"

using namespace Eigen;


int main(){
    Eigen::Matrix<double, 4, 4> matdense;
    Eigen::SparseMatrix<double> mat;

    //matdense << 0,3,0,22,0,1,7,5,0;
    matdense << 3,1,2,4,1,4,0,0,2,0,2,0,4,0,0,7;

    std::cout << matdense <<std::endl;

    mat = matdense.sparseView();

    AMDOrdering<int> ordering;
    PermutationMatrix<Dynamic, Dynamic, int> perm;
    //Fill the matrix ...
    ordering(mat, perm); // command option1
    ordering.operator()(mat, perm); // command option2
    VectorXi a;
    a = perm.indices(); // gives a indices as a vector format
    std::cout << a << std::endl;

    int *ml;
    ml = a.data(); // change the vector format indices as a array pointer
    std::cout << ml[0]<< ml[1]<< ml[2]<< ml[3] << std::endl;

    mat.makeCompressed();
    
    std::cout << mat.valuePtr()[0] << mat.valuePtr()[1] << mat.valuePtr()[2] << std::endl;
    std::cout << mat.innerIndexPtr()[0] << mat.innerIndexPtr()[1] << mat.innerIndexPtr()[2] << std::endl;
    std::cout << mat.outerIndexPtr()[0] << mat.outerIndexPtr()[1] << mat.outerIndexPtr()[2] << mat.outerIndexPtr()[3] << std::endl;

    return 0;
}

// $ g++ test.cpp -o test
// $ ./test