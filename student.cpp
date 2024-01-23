#include<iostream>
using namespace std;
class student
{
    int acc_no;
    char name[45];
    int cr;
    public :
    void getdata();
    void display();
};
void student::getdata()
{
    cout<<"enter the name of student="<<endl;
     cin>>name;
    cout<<"enter the class rollno="<<endl;
     cin>>cr;
    cout<<"enter the account number="<<endl;
    
  
    cin>>acc_no;
    
    
}
void student::display()
{
    cout<<" the name of student="<<name<<endl;
    cout<<" the class rollno="<<cr<<endl;
    cout<<"the account number="<<acc_no<<endl;
}
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;
}