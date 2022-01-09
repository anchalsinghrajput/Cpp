class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        //========================== approach1
        // priority_queue<int> queue; //min heap
        
        // for(int i = l; i <= r; i++)
        // {
        //     queue.push(arr[i]);
        //     if(queue.size()>k)
        //     {
        //         queue.pop();
        //     }
        // }
        // return queue.top();
    
        //================================approach
        sort(arr, arr+(r - l + 1));
        return(arr[k-1]);
        
        
    }
};
