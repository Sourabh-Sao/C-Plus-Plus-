#include <bits/stdc++.h>
using namespace std;

// agar column matrix h to outer loop column pe hoga

int maxColSum(int mat[][4], int row, int col)
{
    int maxSum = INT_MIN;
    int sum = 0;
    
    for (int i = 0; i < col; i++)
    {
        sum = 0; //har bar sum ko 0 karna zaroori hai 2 row ka sum bhi add ho jayega.
        for (int j = 0; j < row; j++)
        {
            // yaha pe row and column ka order change hoga
            // jisko bar bar chalan h wo inner loop rhega isme row bar bar chal rha h isliye usko baad me likhenge.
            // kyu ki is barr row phele bdegi then uske bad colmn badhega.
            sum += mat[j][i];
        }
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main()
{

    int matrix[3][4] = {{23, 34, 56, 67},
                        {45, 56, 67, 78},
                        {56, 67, 78, 89}};
    int row = 3;
    int col = 4;

    cout << maxColSum(matrix, row, col) << endl;
    return 0;
}