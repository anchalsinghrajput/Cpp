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
    void bubbleSort(int arr[], int n);
};

void Solution::bubbleSort(int arr[],int n)
{
    for(int i = 0; i<n-1;i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
 
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
        ob.bubbleSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}  
