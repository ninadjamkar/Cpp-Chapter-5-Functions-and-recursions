#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<"";
        }
        cout<<""<<endl;
    }
}


OUTPUT -
Enter number of rows: 5
1
12
123
1234
12345
