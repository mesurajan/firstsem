#include<iostream>
using namespace std;
int add(int x,int y=20,int z=35)
{
return x+y+z;
}
int main(){
    add(5);
    cout<<"sum="<<add(5)<<endl;
    add(3,5);
    cout<<"sum="<<add(3,5)<<endl;
    add(4,5,6);
    cout<<"sum="<<add(3,4,5)<<endl;
    return 0;
}