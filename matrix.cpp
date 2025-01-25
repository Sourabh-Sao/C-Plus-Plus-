#include <bits/stdc++.h>
using namespace std;

int main()
{
    // first square bracses are row and second braces are coloumn
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    // changing value
    matrix[2][1] = 55;

    // accessing value
    // cout<<matrix[2][1];

    // printing value using loop
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}