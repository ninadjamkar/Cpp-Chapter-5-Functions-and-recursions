#include<iostream>
using namespace std;
float weight(int x)
{
    return (float)x*9.8;
}
int main()
{
    float mass;
    float result;
    cout<<"Enter your mass: ";
    cin>>mass;
    result=weight(mass);
    cout<<"Your weight is: "<<result<<" N"<<endl;
    
    return 0;
}


OUTPUT -
Enter your mass: 72.35
Your weight is: 705.6 N
