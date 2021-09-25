#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int a[],int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                int temp=a[i];
                return  temp;
            }
        }
    }
}
int main(){

    int n , a[100];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<findDuplicate(a,n);
    return 0 ;
}
