//simple pattern

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    //Q1
    //12345
    //12345
    //12345
    //12345
    //12345
  
    int n=5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        	cout<<j;
        cout<<endl;
    }
    
    cout<<endl;
    
    //Q2
    //12345
    //1234
    //123
    //12
    //1
    
    int x=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        	cout<<j;
        cout<<endl;
        x--;
    }
    
    cout<<endl;
    
    //Q3
    //1
    //12
    //123
    //1234
    //12345

    for (int i = 1; i <= n; i++)
    {
    	for (int j = 1; j <= i; j++)
    		cout<<j;
	    cout<<endl;
    }

    cout<<endl;
    
    //Q4
    //1
    //22
    //333
    //4444
    //55555
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cout<<i;
        cout<<endl;
    }
    
    cout<<endl;
    
    //Q5
    //54321
    //5432
    //543
    //54
    //5
    
    for(int i = 0; i <= n ; i++)
    {
        for(int j = 5; j > i; j--)
            cout<<j;
        cout<<endl;
    }


}

/*
Enter n 7
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28 
*/


#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1,j,val = 1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<val<<" ";
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

/*
Enter n 4
ABCD
ABCD
ABCD
ABCD
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        char a = 'A';  // we can also write it as ---->   char a = 65;      as 65 is asci value of A
        int j=1;
        while(j<=n)
        {
            cout<<a;
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

/*
n = 5
*
**
***
****
*****
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

/*
1
21
321
4321
54321
654321
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<i-j;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}
/*
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=0;
        char a = 'A'+(i-1);
        while(j<i)
        {
            cout<<a;
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}

/*
A
BC
CDE
DEFG
EFGHI
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=0;
        char a = 'A'+(i-1);
        while(j<i)
        {
            cout<<char(a+j);
            j++;
        }
        
        cout<<endl;
        i++;
    }
    return 0;
}

/*
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    char a = 'H';
    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<char(a+j);
            j++;
        }
        a--;
        cout<<endl;
        i++;
    }
    return 0;
}

/*
Enter number of rows : 5
    *
   **
  ***
 ****
*****
*/
/*
      1 
     12
    123
   1234
  12345

*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of rows : ";
  cin>>n;
  
  int i=1;
  while(i<=n)
  {
      int k = i;
      while(k<=n-1)
      {
          cout<<" ";
          k++;
      }
      int j=1;
      while(j<=i)
      {
          cout<<"*";
          j++;
      }
      cout<<endl;
      i++;
  }
  return 0;   
}
/*
      1 
     12
    123
   1234
  12345

*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of rows : ";
  cin>>n;
  
  int i=1;
  while(i<=n)
  {
      int k = i;
      while(k<=n-1)
      {
          cout<<" ";
          k++;
      }
      int j=1;
      while(j<=i)
      {
          cout<<j;
          j++;
      }
      cout<<endl;
      i++;
  }
  return 0;   
}
Enter number of rows : 6
******
*****
****
***
**
*

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of rows : ";
  cin>>n;
  
  int i=1;
  while(i<=n)
  {
      int j=1;
      while(j<=(n-i+1))
      {
          cout<<"*";
          j++;
      }
      cout<<endl;
      i++;
  }
  return 0;   
}
/*
Enter number of rows : 5
    1
   121
  12321
 1234321
123454321

*/
 /*
      1 
     12
    123
   1234
  12345

*/

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of rows : ";
  cin>>n;
  cout<<endl;
  int i=1;
  while(i<=n)
  {
      int k = i;
      while(k<=n-1)
      {
          cout<<" ";
          k++;
      }
      
      int j=1;
      while(j<=i)
      {
          cout<<j;
          j++;
      }
      
       j=i-1;
      while(j>=1)
      {
          cout<<j;
          j--;
      }

      cout<<endl;
      i++;
     
  }
  return 0;   
}
