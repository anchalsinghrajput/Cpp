#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*new1,*head,*tail;

int main()
{
    int value;
    cout<<"Enter the elements in the node and enter -1 to terminate : ";
    while(1)
    {
        cin>>value;
        new1 = new node;
   
        new1->data = value ;
        new1->next = NULL;
        if(value==-1)
        {
            break;
        }
        else
        {
            if(head==NULL)
                head=new1;
            else
                tail->next=new1;
            tail=new1;
        }
    }
   
    cout<<"Elements are : ";
    node *temp;
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    
    cout<<"\nNumber of nodes in the linked list is : "<<count;
    
    return 0;
}


#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*new1,*head,*tail;

class linklist
{
 node *head;
 public:
 linklist()
 {head=NULL;}
 void create(void);
 void display(void);
};

 void linklist :: create()
 {
    int value;
    cout<<"Enter the elements in the node and enter -1 to terminate : ";
    while(1)
    {
        cin>>value;
        new1 = new node;
  
        new1->data = value ;
        new1->next = NULL;
        if(value==-1)
        {
            break;
        }
        else
        {
            if(head==NULL)
                head=new1;
            else
                tail->next=new1;
            tail=new1;
        }
    }
 }  
   void linklist :: display(void)
    {
        cout<<"Elements are : ";
        node *temp;
        temp=head;
        int count=0;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
            count++;
        }
       cout<<"\nNumber of nodes in the linked list is : "<<count;
       delete(temp);
    }

    

int main()
{
    linklist o1;
    o1.create();
    o1.display();
    return 0;
}
