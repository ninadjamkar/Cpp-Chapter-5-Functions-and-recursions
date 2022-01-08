#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<"";
        }
        cout<<""<<endl;
    }
}


OUTPUT -
Enter number of rows: 8
12345678
1234567
123456
12345
1234
123
12
1
