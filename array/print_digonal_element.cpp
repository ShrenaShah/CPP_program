#include<iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            if(i == j)
            {
                cout<<"\n"<<a[i][j];
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            if((i+j) == (2))
            {
                cout<<"\n"<<a[i][j];
            }
        }
    }
    return 0;
}