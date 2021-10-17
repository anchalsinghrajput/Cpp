#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

node* takeInput() 
{
    int data;
    cout<<"Enter elements (enter -1 to terminate) : ";
    cin>>data;
    node *head = NULL;
    node *tail = NULL;
    while(data!=-1)
    {
        node *newNode = new node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;                      // (or) tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

void display(node *head)
{
    cout<<"Elements in the linked list are : ";
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    node *head=takeInput();
    display(head);
    return 0;
}
