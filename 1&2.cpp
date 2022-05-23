#include <iostream>
#include <vector>
using namespace std;

class matrix
{
public:
    int row;
    int col;
    vector <vector <int> > mass;
public:
    matrix( int row,int col)
    {
         this -> row = row;
         this -> col = col;
        vector <int> c(col, 1);
        for (int i = 0; i < row; i++)
        {
            mass.push_back(c) ;
        }
    }
};
    void summation(matrix A, matrix B)   //Задание 2
    {
        vector <vector<int>> C(A.row,vector<int>(A.col));

        for (int i = 0; i < A.row ; i++)
        {
            for (int k = 0; k < A.col ; k++)
            {
                C[i][k] = A.mass[i][k] + B.mass[i][k];
                cout << C[i][k] << " ";
            }
            cout<< endl;

        }
    };

int main() {
    matrix A(2,2);
    matrix B(2,2);
    summation(A,B);
    return 0;
}



