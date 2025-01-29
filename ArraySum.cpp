#include<bits/stdc++.h> 
using namespace std;


int sum(vector<int> arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return sum;

}

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout << sum(arr) << endl;
    return 0;
}