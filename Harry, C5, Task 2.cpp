#include<iostream>
using namespace std;

float temperature(int x)
{
    return (float)(x*1.8)+32;
}
int main()
{
    float x;
    float result;
    cout<<"Enter temperature in degree celsius: ";
    cin>>x;
    result=temperature(x);
    cout<<"The same temperature in degree Fahrenheit is: "<<result<<endl;
    
    return 0;
}


OUTPUT -
Enter temperature in degree celsius: 36.7
The same temperature in degree Fahrenheit is: 96.8
