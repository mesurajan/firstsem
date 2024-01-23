/*Aggregation means an object of a class with 
refrence to an object of another class but both 
are not dependent to each other*/
#include<iostream>
#include<string>
using namespace std;
class Author{
    string name;
    string qualification;
    public:
    void getdata()
    {
        cout<<"enter authors name:"<<endl;
       getline(cin,name);
        cout<<"enetr the qualifications :"<<endl;
        getline(cin,qualification);

    }
    void putdata()
    {
        cout<<"THe name of author="<<name<<endl;
        cout<<"the qualification of author="<<qualification<<endl;

    }
};
class publication{
    string pname;
    public:
    
     void getdata(){
        cout<<"enter the Pname"<<endl;
        getline(cin,pname);

     }
     void putdata(){
        cout<<"THe pname ="<<pname<<endl;

     }
};
class Book{
    string title;
    int price;
    Author author;
    publication pub;
    public:
    void getdata()
    {
cout<<"enter the title of book"<<endl;
getline(cin,title);
cout<<"enter the price of the book"<<endl;
cin>>price;
cin.ignore();

author.getdata();
pub.getdata();
}
void putdata()
{
cout<<"THe title of book="<<title<<endl;
cout<<"the price of book="<<price<<endl;
author.putdata();
pub.putdata();
}
};
int main(){
    Book book1;
    cout<<"Enter the book details=\n";
    book1.getdata();
cout<<"Displaying book details=\n";
    book1.putdata();
    cout<<"\n";
    Book book2;
   cout<<"enter the book details=\n";
    book2.getdata();
   cout<<"Displaying the book details=\n";
    book2.putdata();

    return 0;

};
