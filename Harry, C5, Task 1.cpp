#include<iostream>
using namespace std;
float average(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}
int main()
{
    int x,y,z;
    float result;
    cout<<"Enter three numbers: "<<endl;
    cin>>x>>y>>z;
    result=average(x,y,z);
    cout<<"The average of above three numbers is: "<<result<<endl;
    
    return 0;
}


OUTPUT -
Enter three numbers: 
13
26
31
The average of above three numbers is: 23.3333
