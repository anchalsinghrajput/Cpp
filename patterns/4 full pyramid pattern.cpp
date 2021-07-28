
#include<iostream>
using namespace std;
int main()
{
    
    //pattern for full pyramid approach 1
    
    int i, j, n, k ;
    cout<<"Enter the number of rows : ";
    cin>>n;
    
    for(i = 1; i <= n; i++, k=0)
    {
        for(j = 1; j <= (n-i); j++)
        {
            cout<<"  ";
        }
        
        while(k != 2*i-1)
        {
            cout<<"* ";
            k++;
        }
    
        cout<<endl;
    }
    cout<<endl;
    
    //pattern for full pyramid approach 2
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(2*n - 1); j++)
        {
            if(j>=n-(i-1)&&j<=n+(i-1))
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
     //pattern for full inverted pyramid
     
    for(i = n; i >=1; i--, k=0)
    {
        for(j = 1; j <= (n-i); j++)
        {
            cout<<"  ";
        }
        
        while(k != 2*i-1)
        {
            cout<<"* ";
            k++;
        }
    
        cout<<endl;
    }
     
    return 0;
}
