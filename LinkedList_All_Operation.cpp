#include <bits/stdc++.h>
using namespace std;
// major functions of linked list
// push_front -insert at front
// push_back - insert at back
// pop_front - delete from front
// pop_back -  delete from back

class Node
{ // class for node to create a node
public:
    int data;
    Node *Next; // pointer to next node

    Node(int val)
    { // constructor for node to initialize the value of node
        data = val;
        Next = NULL;
    }
};

class List
{               // class to create a linked list
    Node *head; // pointer to head node
    Node *tail; // pointer to tail node

public:
    List()
    {
        head = tail = NULL; // initializing head and tail to NULL because initially there is no node
    }

    void push_front(int val)
    { // function to insert at front

        // why we use new keyword , because we are creating a node dynamically
        // use of new keyword is to allocate memory dynamically
        // new keyword is used to allocate memory dynamically

        Node *NewNode = new Node(val); // creating a new node
        if (head == NULL)              // if head is NULL then it means there is no node in the linked list
        {
            head = tail = NewNode; // so head and tail will point to the new node
        }
        else
        {
            NewNode->Next = head; // new node ke next me head ko point kara rhe hai kyuki new node ko head ke aage insert karna hai

            head = NewNode; // isko kyu likhe hai kyuki head ko new node pe point kara rhe hai.
        }
    }

    void printLL(){ // function to print the linked list
        Node *temp=head;   //creating a temp node and pointing it to head , why because we have to traverse the linked list

        while(temp!=NULL){  // jab tak temp null nhi ho jata tab tak traverse karte rahenge
            cout<<temp->data<<" "; 
            temp=temp->Next; 
        }
        cout<<endl;
    }

    void push_back(int val){
        Node *NewNode=new Node(val); // creating a new node

        if (head==NULL)
        {
            head=tail=NewNode; // if head is NULL then it means there is no node in the linked list so head and tail will point to the new node
        }
        else
        {
            tail->Next=NewNode; //tail k next me NewNode ka address store kara rhe hai
            tail=NewNode; // tail ko NewaNode pe Move kara rhe hai
        }
        
    }

    void pop_front(){
        if (head==NULL)
        {
            cout<<"Underflow"<<endl;
        }
        else
        {
            Node *temp;
            temp=head; //ek duplicate node banaya aur usko head pe point kara diya

            head=head->Next; // head ko next node pe move kara diya kyuki first node delete ho rha hai

            delete temp; // delete the first node

        }
    }

    void pop_back(){
        if (head==NULL){
            cout<<"Underflow"<<endl;
        }
        else
        {
            Node *temp=head;
            // ab jaise me direct head pe pauch gya wase tail ke previous pe pauchne ke liye ek loop chalana padega kyu ki last node ko delete karna hai.
            // tail pointer null ko point kr rha hai

            // last second node wo node hogi jiska next tail ko point krega.
            // to ab last ko delte krna h to last second node tak jayenge aur last ko delete kr denge fir last second last aur tail ban jayega
            while(temp->Next!=tail){
                temp=temp->Next;  //temp ko aage badha rhe h  takki tail ke previous tak pahuche
            }
            temp->Next=NULL; // delete the last node
            delete tail;
            tail=temp;
        }
    }

    void insertInMiddle(int val,int pos){
        if(pos<0){
            cout<<"Invalid Position"<<endl;
            return;
        }

        if (pos==1)
        {
            push_front(val);
            return;
        }
        Node * NewNode=new Node(val);
        Node *temp=head;
        for (int i = 0; i < pos-1; i++)
        {
            if (temp==NULL)
            {
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp=temp->Next;
        }
        NewNode->Next=temp->Next;
        temp->Next=NewNode;
        
    }    

    int search(int val){
        Node *temp=head;
        int pos=0;
        while(temp!=NULL){

            pos++;
            if (temp->data==val)
            {
                cout<<"Element Found at position "<<pos<<endl;
                return pos;
            }else{
                temp=temp->Next;
            }
        }
            return -1;
    }

    void deleteNode(int pos){
        Node *temp=head;
        if (pos==1)
        {
            pop_front();
            return;
        }
        for (int i = 0; i < pos-1; i++)
        {
            if (temp==NULL)
            {
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp=temp->Next;
        }
        Node *del=temp->Next;
        temp->Next=del->Next;
        delete del;
    }

};



int main()
{
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);

    l.push_back(4);
    l.insertInMiddle(5,2);
    l.insertInMiddle(8,2);
    // l.search(8);

    l.deleteNode(2);
    l.printLL();
    return 0;
}