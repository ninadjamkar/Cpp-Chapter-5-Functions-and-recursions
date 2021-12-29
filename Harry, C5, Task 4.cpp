#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter nth term: ";
    cin>>n;
    cout<<"The "<<n<<"th term of Fibonacci series is: "<<fibonacci(n-1)<<endl;
    
    return 0;
}


OUTPUT -
Enter nth term: 10
The 10th term of Fibonacci series is: 34
