#include <iostream>
using namespace std;
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
        for(int i = 0; i< n-1; i++)
       {
           int min=arr[i],minIndex=i,j;
           for( j = i+1;j<n;j++)
           {
               if(arr[j]<min)
               {
                   min = arr[j];
                   minIndex=j;
               }
           }
           swap(&arr[i],&arr[minIndex]);
       }
    }
};

 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
 
int main()
{
    int arr[1000],n,T,i;
  
    cin>>T;
    
    while(T--)   //test cases
    {           
        cin>>n;
        for(i=0;i<n;i++)
          cin>>arr[i];
          
        Solution ob;  
        ob.selectionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}  
