#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    
    node(int data)               //constructor
    {
        this->data=data;
        next= NULL;
    }
};

int main()
{
//     STATICALLY CREATING LINKED LIST
    node n1(1);                 // creating first node
    node *head=&n1;
    node n2(2);                 // creating second node
    n1.next=&n2;                 //attaching two nodes
    cout<<"Elements in linked list are "<<n1.data<<" "<<n2.data<<endl;  //displying data
    
//     DYNAMICALLY CREATING LINKED LIST
    node *n3 = new node(10);
    node *n4 = new node(20);
    n3 -> next = n4;
    
    cout<<n3->data<<" "<<n4->data;
    return 0;
}
