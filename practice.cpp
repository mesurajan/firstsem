#include<iostream>
using namespace std;
void display();
void display(int);
void display(float);
void display(int,float);

int main()
{
    int a=5;
    float b=5.5;
    display(a);
    display(b);
    display(a,b);
    return 0;

}
void display(int var)
{
cout<<"Integer number is"<<var<<endl;
}
void display(float var)
{
    cout<<"Floating number is"<<var<<endl;
}
void display(int var1,float var2){
cout<<"Integer number is"<<var1<<endl;
cout<<"Floating number is"<<var2<<endl;
}