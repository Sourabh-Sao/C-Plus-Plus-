#include<bits/stdc++.h>
using namespace std;

    

int main(){

    vector<vector<int>>num1={{1,2},{2,3},{4,5}};
    vector<vector<int>>num2={{1,4},{3,2},{4,1}};
    
    // adding 2d with initializing the size of 3rd matrix

    // vector<vector<int>>ans;
    // ans.resize(num1.size());

    // for (int i = 0; i < num1.size(); i++)
    // {
    //     ans[i].resize(num1[i].size());
    //     for (int j = 0; j < num1[i].size(); j++)
    //     {
    //         ans[i][j]=num1[i][j]+num2[i][j];
    //     }    
    // }

    // printing the sum
    // for (int i = 0; i < num1.size(); i++)
    // {
    //     for (int j = 0; j < num1[i].size(); j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    // adding 2d matrix wihout declaring the size of 3rd matrix
    
    vector<vector<int>>ans;
    
    for (int i = 0; i < num1.size(); i++)
    {
        vector<int>row;
        for(int j=0;j<num1[i].size();j++){
            row.push_back(num1[i][j]+num2[i][j]);
        }
        ans.push_back(row);
    }

    // printing the sum
    for (int i = 0; i < num1.size(); i++)
    {
        for (int j = 0; j < num1[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}