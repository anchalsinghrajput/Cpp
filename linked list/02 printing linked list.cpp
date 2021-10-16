//creating and displaying a 5 node linked list 
------------------------------------------------------STATICALLY--------------------------------------------------------------
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
void print(node *head)
{
    node * temp = head;
    while(temp)      //( or ) while(head!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
//     STATICALLY CREATING LINKED LIST
    node n1(1);                 // creating first node
    node *head=&n1;
    
    node n2(2);                  // creating second node
    
    node n3(3);
    node n4(4);
    node n5(5);
    
    
    n1.next = &n2;                 //attaching two nodes
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    
    print(head);
    
    return 0;
}

---------------------------------------------------------------DYNAMICALLY---------------------------------------------------------
  
  //creating and displaying a 5 node linked list 

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
void print(node *head)
{
    node * temp = head;
    while(temp)      //( or ) while(head!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
//    DYNAMICALLY CREATING LINKED LIST
    node *n1 = new node(1);                 // creating first node
    node *head= n1;
    
    node *n2 = new node(2);                  // creating second node
    
    node *n3 = new node(3);
    node *n4 = new node(4);
    node *n5 = new node(5);
    
    
    n1->next = n2;                 //attaching two nodes
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    
    print(head);
    
    return 0;
}
  
  
  
