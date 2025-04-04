#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={1,2,3,1,2,3,5};
    unordered_map<int,int>m;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    // code to print the frequency 
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}