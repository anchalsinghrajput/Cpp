#include <iostream>
using namespace std;

struct node
{
int data;
node *next;
}*n,*head,*tail;


int main()
{
  int value;
  cout<<"Enter -1 to terminate \n";
  cout<<"Enter elements : ";
  while(1)
  {
    cin>>value;
    
     if(value==-1)
        break;
     else
     {
        n = new node;
        n->data=value;
        if(head==NULL)
           head=n;
        else
           tail->next=n;
        tail=n;
        
     }
  }
  
  int sum=0;

    while(head)
    {
        sum+=head->data;
        head=head->next;
    }
   
   cout<<"sum  : "<<sum; 
   return 0;
   
}
