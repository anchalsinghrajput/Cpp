// direct

#include <iostream>
using namespace std;
int main() 
{
    int a ,b,sum;
    cout <<"Enter two nunbers : ";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum of two numbers is : "<<sum;
    return 0;
}

//using function

#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}

int main() 
{
    int a ,b;
    cout <<"Enter two nunbers : ";
    cin>>a>>b;
    cout<<"Sum of two numbers is : "<<sum(a,b);
    return 0;
}
