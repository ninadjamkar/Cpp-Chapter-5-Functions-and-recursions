#include<iostream>
using namespace std;
int main()
{
    int number=1;
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<" "<<endl;
    }
}


OUTPUT -
Enter number of rows: 4
1  
2 3  
4 5 6  
7 8 9 10  
