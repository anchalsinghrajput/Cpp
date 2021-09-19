#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void merge_arrays(int a[], int b[], int c[], int m, int n)
{
    int i,j,k;
    i=j=k=0;
    while(i<m&&j<n)
    {
      if(a[i]>b[j])
      c[k++]=b[j++];
      else
      c[k++]=a[i++];
    }
    for(;i<m;i++)
        c[k++]=a[i];
    for(;j<n;j++)
        c[k++]=b[j];
}
int main()
{
    int n,m;
    cout << "\nEnter the size of Array 1 : ";
    cin >> m;
    cout << "\nEnter the size of Array 2 : ";
    cin >> n;
    
    int arr1[m],arr2[n];
    int arr3[m+n];
    int i;
    
    cout << "\nInput the Array 1 elements : ";
    for(i = 0; i<m;i++)
    {
        cin >> arr1[i];
    }
    
    cout << "\nInput the Array 2 elements : ";
    for(i = 0;i<n;i++)
    {
        cin >> arr2[i];
    }
    
    merge_arrays(arr1,arr2,arr3,m,n);
    
    cout << "\nThe Merged Sorted Array : ";
    for(i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}
