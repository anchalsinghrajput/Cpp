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
    node n1(1);                 // creating first node
    node n2(2);                 // creating second node
    n1.next=&n2;
    cout<<"Elements in linked list are "<<n1.data<<" "<<n2.data<<endl;  //displying data
    return 0;
}
