#include<bits/stdc++.h>
using namespace std;

// agar row wise matirx h to outer loop row pe hoga

int maxRowSum(int mat[][3] ,int row,int col){

    int maxSum=INT_MIN;
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        sum=0; //har bar sum ko 0 karna zaroori hai 2 row ka sum bhi add ho jayega.
        for (int j = 0; j < col; j++)
        {
            // row major m column bar bar aage badh rha tha aur j inner loop tha , 
            sum+=mat[i][j];
        }
        maxSum=max(maxSum,sum);
        
    }
    return maxSum;
}

int main(){
    int matrix[4][3]={{12,23,34},{45,56,67},{78,89,90},{11,22,33}};
    int row=4;
    int col=3;

    cout<<maxRowSum(matrix,row,col)<<endl;
    return 0;
}