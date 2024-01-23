#include<iostream>
using namespace std;
class sub
{
    int x,y,z;
    public :
    void getdata(int a,int b,int c);
    void display(void);
    void operator -();
};
void sub::getdata(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;

}
void sub::display(void)
{
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
void sub::operator -()
{
    x=-x;
    y=-y;
    z=-z;

}
int main()
{
    sub s;
    s.getdata(10,20,-45);
    s.display();
    -s;
    s.display();
    return 0;
}