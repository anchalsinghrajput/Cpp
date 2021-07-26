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
