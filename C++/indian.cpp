#include<iostream>
using namespace std;
class currency
{
    int a,b,c;
    public :
    void getdata();
    void display();
};

void currency::getdata()
{
    cout<<"enter the indian currency"<<endl;
    cin>>b;
    c=b*1.6;
}
void currency::display()
{
    cout<<"the converted currency is"<<c<<endl;

}
int main()
{
    currency c;
c.getdata();
c.display();
return 0;

}