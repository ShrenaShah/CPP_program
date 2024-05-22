#include<iostream>
using namespace std;

int new_salary(int sal);

int main()
{
    int sal = 25000;
    new_salary(sal);
    cout<<"salary in main function: "<<sal<<endl;

    return 0;
}

int new_salary(int sal)
{
    sal = 50000;
    cout<<"salary in user define function: "<<sal<<endl;
}