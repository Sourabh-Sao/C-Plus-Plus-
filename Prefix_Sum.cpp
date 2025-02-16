#include<bits/stdc++.h>
using namespace std;

vector<int>prefixSum(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n,0);
    ans[0]=arr[0];
    for (int i = 1; i < n; i++)
    {   
        ans[i]=ans[i-1]+arr[i];
    }
    
    return ans;


}

int main(){
    
    vector<int>arr={1,2,3,4,5};
    vector<int>ans=prefixSum(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }

    return 0;
}