#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    int count=0;
    while (n!=0)
    {
        int digit=n%10;
        cout<<digit<<endl; 
        count++;
        n=n/10;
    }
    // cout<<count;

}

int main(){
    int n=3568;
    printDigit(n);

    return 0;
}