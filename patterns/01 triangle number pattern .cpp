/*Enter n : 4
   1
  232
 34543
4567654
*/


#include<iostream>
using namespace std;
int main()
{
    int n ,i=1;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        { 
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout<<j+i-1;
            j++;
        }
        j=1;
        while(j<=i-1)
        {
            cout<<((2*i)-j-1);
            j++;
        }
        cout<<endl;

        i++;
    }
    return 0;
}


/*
Enter n : 5
    1    
   212   
  32123  
 4321234 
543212345
*/

#include<iostream>
using namespace std;
int main()
{
    int i = 1,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }

        int j=1;
        while(j<=i)
        {
            cout<<i-j+1;
            j++;
        }
        int k=1;
        while(k<=i-1)
        {
            int x=2;
            cout<<x+(k-1);
            k++;
        }

        cout<<endl;
        i++;
    }
    return 0;
}
