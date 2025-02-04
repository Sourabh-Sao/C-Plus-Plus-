// Armstrong number is equal to the sum of cubes of digit
// for ex 153
// 1^3=1
// 5^3=125
// 3^3=27
// 1+125+27=153

#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN=n;
    int sumofCube=0;
    while (n!=0)
    {
        int digit=n%10;
        sumofCube+=(digit*digit*digit);
        n=n/10;
    }
    return sumofCube==copyN;
}

int main(){
    int n=153;

    if(isArmstrong(n))
    {
        cout<<" is an armstrong num";
    }else{
        cout<<"not";
    }
    // cout<<"dfb";

    return 0;
}