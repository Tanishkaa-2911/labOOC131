#include<iostream>
using namespace std;
class Employee
{
public:
    int empid;
    string empname;
    double sal;

    void input()
    {
        cout<<"Enter Emp id : "<<endl;
        cin>>empid;
        cout<<"Enter employee name : "<<endl;
        cin>>empname;
        cout<<"Enter Salary : "<<endl;
        cin>>sal;
    }
    void display()
    {
        cout<<"Employee ID : "<<empid<<endl;
        cout<<"Employee Name : "<<empname<<endl;
        cout<<"Employee Salary : "<<sal<<endl;
    }
    
};
int main()
{
    Employee e1;
    e1.input();
    e1.display();
    return 0;
}