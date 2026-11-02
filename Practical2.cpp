#include<iostream>
using namespace std;
class Student
{
    private:

    string name;
    int rn,marks;
    public: 
    void getdata()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no : ";
        cin>>rn;
        cout<<"Enter marks : ";
        cin>>marks;
    }
    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Roll No : "<<rn<<endl;
        cout<<"Marks : "<<marks;
    }

};
 main()
{
    Student s1;
    s1.getdata();
    s1.display();

}