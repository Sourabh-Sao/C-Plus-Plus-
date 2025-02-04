#include<iostream>
using namespace std;
// int changeA(int* ptr){ //pass by reference using pointer
//     *ptr=20;
// }


// int changeA(int &b){ //pass by reference using alias  yaha a k liye hi dusra nam use kr rhe h jo ki b h
//     b=20;
// }
int main(){
    // int a=12;
    // & -> this is address of operator 

    // simple pointer to a variabel
    // int *ptr=&a;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
// -------------------------------------------------

    // pointer to pointer
    // means a pointer stores a address of another pointer
    // int a=12;
    // int* ptr1=&a;
    // here you to pay attension to store address of another the 2nd pointer should have same datatype of first pointer ptr1
    //i.e (int*) data type of ptr1 and 2nd pointer is also a pointer so *ptr2
    // int* *ptr2=&ptr1;
    // cout<<ptr2;

// -----------------------------------------------------
    // *->this is dereferencing operator */
    // this is value at address , this  gives value stored at that address,this gives value
    // int a=12;
    // int *ptr=&a; // this return address of a
    // int *ptr=&a; //
    // cout<<*ptr; //ptr contain address ,but using * before ptr gives value stored at ptr
    // cout<<*(&a);// this is also same value at address
    // ** is also used

    // Qs
    // int a=5;
    // int *p=&a;
    // int **q=&p;

    // cout<<*p<<endl; //5
    // cout<<**q<<endl; //5
    // cout<<p<<endl; //p address
    // cout<<*q<<endl; //p address

// ------------------------------------------------------------------
    // pass by reference
    // it can be either through pointer or alias
    // paramter me agar pass by value h to argument ki copy pass hoti h jiss orignal me koi effect ni hota h
    // agar kisi func me koi value pass krte h to uss us value ki copy pass hoti h jiss original m koi effect ni hota h kyu ki copy wale ki address dusrti hoti h aur original ki dusri 
    // pr agar original value ko pass krna ho to us original value ka adress pass kr dete h jise hum [pass by reference kehte h]

    // a ka address pass hua h argument m jisse agar a ka value change kre to real value change hogi 
    //  int a=12;
    //  cout<<changeA(&a);  //reference usingh pointer
    //  cout<<changeA(a);  //reference usingh alias 
    //  alias means dusra nam same variable ka
    //  cout<<endl<<a;

// ------------------------------------------------------------
    // here arr (also array) but is pointer which points to the 0th index called aray pointer this also called constant pointer
    // int arr[]={1,2,3,4,5};
    // cout<<arr; //gives address of 0th index
    // cout<<*arr; //gives value at 0th index

    // -----------------------------------------------------------
    // pointer arithmetic
    // int a=12;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    // increment /decrement
    // ptr--;
    // ptr++;

    // addition/substraction
    // ptr=ptr+2;//  yaha ptr + 2*type of ptr(2*4=8) 
    // ptr=ptr-2;//  yaha ptr - 2*type of ptr(2*4=8) 
    // arr is pointer which points to 0th index uisng * we can get value at arr
    // int arr[]={1,2,3,4};
    // cout<<arr<<endl;
    // cout<<*(arr)<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;

    // subtraction of pointer with pointre , this return number of block of type(ptr) means how many block of space are there in between of those two pointer
    // ex = 108-100=8byte if int 

    return 0;
}