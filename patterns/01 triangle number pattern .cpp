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
