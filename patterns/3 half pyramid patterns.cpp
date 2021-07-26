#include<iostream>
using namespace std;

int
main ()
{
    
  int i,j,n=7;
  
  // Half pyramid pattern using stars 
  
  for(i = 0; i < n; i++)
  {
        for(j = 0; j <= i ; j++)
            cout<<"*";
        cout<<endl;
  }
  cout<<endl;
  
  //Inverted half pyramid pattern
  
  for(i = 0; i < n; i++)
  {
        for(j = n; j > i ; j--)
            cout<<"*";
        cout<<endl;
  }
  cout<<endl;
  
  //Hollow half pyramid pattern
  
  for(i = 0; i < n; i++)
  {
      for( j = 0; j <= i ; j++)
      {
          if(j == 0 || i == n-1 || i==j)
                cout<<"*";
            else
                cout<<" ";
      }
      cout<<endl;
  }
  cout<<endl;
  
  //Hollow inverted half pyramid pattern
  
  for(i = 0; i < n; i++)
  {
        for(j = 0; j <n ; j++)
        {
            if(i == 0 || j == 0 || (i+j)==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
  }
  cout<<endl;
  
}                                                                                                                                                                                                                        
