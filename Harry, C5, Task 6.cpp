#include<iostream>
using namespace std;
void printpattern(int n);
int main()
{
    int n=5;
    printpattern(n);
}
void printpattern(int n)
{
    if(n==1)
    {
        cout<<"*"<<endl;
    }
    else
    {
        printpattern(n-1);
        for(int i=0; i<(2*n-1); i++)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
}


OUTPUT -
*
***
*****
*******
*********


