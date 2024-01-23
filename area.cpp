#include<iostream>
using namespace std;
class arpr
{
    int l,b;
    public :
    void setdata();

    void area();
    void perimaters();
};
void arpr::setdata()
{
    cout<<"enter the values of l and b"<<endl;
cin>>l>>b;
}
void arpr::area()
{
    int area;
 area=l*b;
 cout<<"area"<<area<<endl;
}
void arpr::perimaters()
{
    int perimaters;
   perimaters=2*(l+b);
    cout<<"perimaters"<<perimaters<<endl;
}

int main()
{
    arpr s;
    s.setdata();
    s.area();
    s.perimaters();
return 0;
}
