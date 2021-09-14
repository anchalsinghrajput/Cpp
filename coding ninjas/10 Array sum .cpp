// Array sum 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000];
    int n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    
    cout<<"sum : "<<sum;

    return 0;
}
