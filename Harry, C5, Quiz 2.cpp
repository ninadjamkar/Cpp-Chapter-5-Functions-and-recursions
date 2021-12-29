#include<iostream>
using namespace std;
int area(int x)
{
    return (x*x);
}
int main()
{
    int x;
    int result;
    
    cout<<"Enter the length of square: ";
    cin>>x;
    result=area(x);
    cout<<"The area of square: "<<result<<" sq units"<<endl;
    
    return 0;
}


OUTPUT -
Enter the length of square: 14
The area of square: 196 sq units
