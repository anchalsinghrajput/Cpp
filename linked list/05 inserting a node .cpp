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
            tail=newNode;
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

node* insertData(node *head, int pos, int data)
{
    
    node *newNode=new node(data);
    int i = 0;
    node *temp=head;
    
    if(i==0)
    {
        newNode->next=head;
        head=newNode;
        return head;
    }
    
    while(temp != NULL && i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    
    if(temp!=NULL)
    {
        node* t=temp->next; //(or) newNode->next=temp->next;  temp->next=newNode;
        temp->next=newNode;
        newNode->next=t;
    }
    return head;
}

int main()
{
    node *head=takeInput();
    display(head);
    int pos,data;
    cout<<"\nEnter position and data : ";
    cin>>pos>>data;
    head = insertData(head,pos,data);
    display(head);
    return 0;
}
