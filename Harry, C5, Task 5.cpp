#include<iostream>
using namespace std;

int addition(int n)
{
    if(n<1)
    {
        return 0;
    }
    else
    {
        return n + addition(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers: "<<addition(n)<<endl;
    
    return 0;
}


OUTPUT -
Enter the number of terms: 11
The sum of first 11 natural numbers: 66
