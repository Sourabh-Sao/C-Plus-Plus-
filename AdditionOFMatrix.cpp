#include<bits/stdc++.h>
using namespace std;

int main(){

    // Addition of two matrix by taking user input
    int A[2][2];
    int B[2][2];
    int C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>A[i][j];
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>B[i][j];
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
        cout<<endl;
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}