// printing first n prime number 

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int i = 2;
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int i,k;

    for(i=1,k=1;k<=n;i++)
    {
        if(isPrime(i))
        {
            k++;
            cout<<i<<" ";
        }
    }
}
