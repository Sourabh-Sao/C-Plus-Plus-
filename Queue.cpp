#include<bits/stdc++.h>
using namespace std;


int main(){
    // queue
    // queue<int>q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // while (!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }

    // Deque (Double ended queue) 
    // we can push and pop from both ends


    deque<int>dq;
    // all operation

    // dq.push_front()
    // dq.push_back()

    // dq.pop_front()
    // dq.pop_back()

    // dq.front()
    // dq.back()

    dq.push_back(10);
    dq.push_front(20);

    while (!dq.empty())
    {
        cout<<dq.back()<<endl;
        dq.pop_back();
    }
    
    

    return 0;
}