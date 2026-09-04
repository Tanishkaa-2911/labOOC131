#include<iostream>
using namespace std;

class Employee
{
    int emp_id;
    string emp_name,dept;
    double sal;

public:
    void input()
    {
        cout<<"Enter a Employee ID : ";
        cin>>emp_id;
        cout<<"Enter employee name : ";
        cin>>emp_name;
        cout<<"Enter a department name : ";
        cin>>dept;
        cout<<"Enter a salary : ";
        cin>>sal;

    }
    int annual_sal()
    {
        return sal*12;
    }
    void display()
    {
        cout<<"Employee ID : "<<emp_id<<endl;
        cout<<"Employee Name : "<<emp_name<<endl;
        cout<<"Employee Department  : "<<dept<<endl;
        cout<<"Annual salary : "<<annual_sal();

    }

     
};
int main()
{
    Employee e1;
    e1.input();
    e1.display();
    return 0 ;
}