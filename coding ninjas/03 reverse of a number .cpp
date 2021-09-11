/*
Reverse of a number
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them.
 For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8   // 0 t0 100000000 ---> int(in 32-bit compiler int carry 4 bytes) and long (4 byte)
                                                 hence range will be (- 2 pow 31) to ((2 pow 31) -1) 
Sample Input 1 :                                                // -2,147,483,648 to 2,147,483,647
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891
*/
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
    return 0;
}
