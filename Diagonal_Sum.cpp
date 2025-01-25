#include <bits/stdc++.h>
using namespace std;

int diagonalSum(int mat[3][3])
{ // O(n)
    int n = 3;
    int sum = 0;

    // primary diagonal=> i==j
    // secondary diagonal=> j==n-i-1

    for (int i = 0; i < 3; i++)
    {
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
        return sum;
    }
}
// int diagonalSum(int mat[3][3]){  //O(n^2)
//     int n = 3;
//     int sum = 0;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(i==j){
//                 sum += mat[i][j];
//             }else if(j==n-i-1){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << diagonalSum(mat) << endl;
    return 0;
}