/*
Enter n : 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter n : ";
    cin>>n;
    // using while loop
    while(i<=n)
    {
        int j=1;
        while(j<=(n-(i-1)))
        {
            cout<<j;
            j++;
        }
        int k=1;
        while(k<i)
        {
            cout<<"**";
            k++;
        }
        int l=i;
        while(l<=n)
        {
            cout<<n-(l-1);
            l++;
        }
        cout<<endl;
        i++;
    }
    // using for loop

    cout<<endl;

    for(i=1;i<=n;i++)
    {
        for(int j=1; j<=n-(i-1) ;j++)
        {
            cout<<j;
        }
        for(int k=1;k<i;k++)
        {
            cout<<"**";
        }
        for(int l=i;l<=n;l++)
        {
            cout<<n-(l-1);
        }
        cout<<endl;
    }

    return 0;
}
