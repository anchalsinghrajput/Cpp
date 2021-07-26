#include<iostream>
using namespace std;
/*
* * * * * * * * 
*             * 
*             *
*             * 
* * * * * * * *  
*/

int
main ()
{
  // Hollow rectangle pattern using stars 
  
  int n , m;
  cout<<"Enter the number of rows and columns : ";
  cin>>n>>m;
  
  int i,j;
  
  for(i = 0; i < n; i++)
  {
      for(j = 0; j < m; j++)
      {
          if(i ==0 || i ==(n-1) || j == 0 || j == (m-1))
            cout<<"* ";
          else
            cout<<"  ";
      }
    cout<<endl;
  }
  
}                                                                                                                                                                                                                        
