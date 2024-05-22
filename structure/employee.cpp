#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char name;
    float salary;
};

int main()
{
    struct employee shrena;
    shrena.eID = 7;
    shrena.name ='shrena';
    shrena.salary = 200000;

    cout<<"ID of employee is"<<shrena.eID<<endl;
    cout<<"Name of employee is"<<shrena.name<<endl;
    cout<<"Salary of employee is"<<shrena.salary<<endl;

    return 0;
}