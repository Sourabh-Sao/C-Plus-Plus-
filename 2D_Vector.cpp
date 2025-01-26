#include<bits/stdc++.h>
using namespace std;

int main(){

    // vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>mat={{1,2,3},{4,5,6,11,23,44},{7,8,9}};
    // cout<<mat[1][2]<<endl;
    
    // row=mat.size();
    // col=mat[i].size();

    // dynamically accessing the elements of 2D vector
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


    // statically accessing the elements of 2D vector
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    

    return 0;
}   