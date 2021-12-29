#include<iostream>
using namespace std;
int addition(int a, int b)
{
    return (a+b);
}
int main()
{
    int x;
    int y;
    int result;
    
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter another number: ";
    cin>>y;
    result=addition(x,y);
    cout<<"The sum of two numbers: "<<result<<endl;
    
    return 0;
}


OUTPUT -
Enter a number: 37
Enter another number: 57
The sum of two numbers: 94
