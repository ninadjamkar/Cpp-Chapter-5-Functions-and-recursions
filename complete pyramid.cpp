#include<iostream>
using namespace std;
int main()
{
    int rows, space;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(int i=1, k=0; i<=rows; i++, k=0)
    {
        for(space=1; space<=rows-i; space++)
        {
            cout<<" ";
        }
        while(k != 2*i-1)
        {
            k++;
            cout<<"*";
        }
        cout<<""<<endl;
    }
    return 0;
}


OUTPUT -
Enter number of rows: 15
              *
             ***
            *****
           *******
          *********
         ***********
        *************
       ***************
      *****************
     *******************
    *********************
   ***********************
  *************************
 ***************************
*****************************
