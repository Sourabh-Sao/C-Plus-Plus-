#include <bits/stdc++.h>
using namespace std;

int main()
{

    // unordered_map<string,int>mp;

    // mp["first"]=1;
    // mp["second"]=2;
    // mp["third"]=3;

    // mp.insert(make_pair("fourth",4));
    // mp.insert({"fourth",4});

    // mp.erase("third");

    // for(auto val:mp){
    //     cout<<val.first<<" "<<val.second<<endl;
    // }

    // if (mp.count("first"))
    // {
    //     cout<<"found";
    // }

    unordered_map<int, int> mp;
    // key and value
    // array element are key and its frequence/occurence/count is the value
    // unordered_map me key ki initial value 0 hoti h isliye ++ krte h jisse wo 0 se 1 ho jae
    vector<int> arr = {1, 3, 5, 6, 8, 3, 5, 2, 6, 8, 9, 3, 6};
    for (int i = 0; i < arr.size(); i++)
    {

        // int key=arr[i];
        // mp[key]++;
        mp[arr[i]]++;
    }

    // mp.erase(9);
    // OR
    // if (mp.count(9))
    // {        
    //     // mp.erase(9);
    // }
    
    
    // here 10 is our key and value of 10 is same as value of 3
    // mp.insert({10,mp[3]});

    for (auto val : mp)
    {
        cout << val.first << " " << val.second << endl;
    }


//     unordered_map<int, int> mp;

// mp[3] = 5; // create a key-value pair {3: 5}

// cout << mp[3] << endl; // prints 5

// mp[3]++; // increment the existing value

// cout << mp[3] << endl; // prints 6
    return 0;
}