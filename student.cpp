#include <iostream>
using namespace std;

class student
{
public:
    int rollno;
    string name;
    float marks;

    void input()
    {
        cout<<"Enter roll no  : "<<endl;
        cin>>rollno;
        cout<<"Enter student name : "<<endl;
        cin>>name;
        cout<<"Enter marks : "<<endl;
        cin>>marks;
    }

    void display()
    {
        cout<< "rollno : " << rollno <<endl;
        cout<< "name : " << name <<endl;
        cout<< "marks : "<< marks <<endl;
    }
};

int main()
{
    student s1;
    s1.input();
    s1.display();

    return 0;
}