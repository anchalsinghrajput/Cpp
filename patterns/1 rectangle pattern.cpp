#include<iostream>
using namespace std;

int
main ()
{
  // rectangle pattern using stars 
  
  int n , m;
  cout<<"Enter the number of rows and columns : ";
  cin>>n>>m;
  
  int i,j;
  
  for(i = 0; i < n; i++)
  {
      for(j = 0; j < m; j++)
      cout<<"* ";
    cout<<endl;
  }
  
}                                                                                                                                                                                                                        
