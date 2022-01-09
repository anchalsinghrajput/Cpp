void sort012(int a[], int n)
   {
    //   =================== dutch flag algorithm approach
      int low=0;int mid=0;int high=n-1;
      while(mid<=high)
      {
         if(a[mid]==0)
         {
          swap(a,low,mid);
          low++;mid++;
         }
         else if(a[mid]==1)
         {
          mid++;
         }
         else
         {
          swap(a,mid,high);
          high--;
        }
    }
}
