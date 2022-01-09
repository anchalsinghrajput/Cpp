#include <iostream>
using namespace std;

void ans( int n , int arr[])
{
    // int j = n-1;
    // for(int i=0; i<n, i<j; i++)
    // {
    //     if(a[i]>0)
    //     {
    //         if(a[j]<0)
    //         {
    //             int cur = a[j];
    //             a[j]= a[i];
    //             a[i] = cur;
    //             j--;
    //         }
    //         else
    //         {
    //             j--;
    //         }
            
    //     }
    //     else
    //         continue;
    
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    
}    


int main()
{
	int n; 
	cin>>n;
	
	int a[n];
	for(int i = 0; i <n; i++)
	    cin>>a[i];
	   
	ans(n,a);
	    
	for(int i = 0; i <n; i++)
	    cout<<a[i]<<" ";
	    
	return 0;   
}
