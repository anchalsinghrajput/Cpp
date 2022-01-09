string reverseWord(string str)
{
    //----------------------------------------- approach 1
    // int i, j,l=0;
    // char temp;
    // for(i=0;str[i]!='\0';i++)
    // {
    //     l++;
    // }
    // for(i=0,j=l-1; j>=i;i++,j--)
    // {
    //     temp=str[i];
    //     str[i]=str[j];
    //     str[j]=temp;
    // }
    // return str;
    
    //------------------------------------------- approch 2
    string rev = "";
    
    for(int i = str.length()-1; i>=0; i--)
    {
        rev = rev + str[i];
    }
    return rev;
    
}
