#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

class student {
    int c_rn;
    char name[50];

public:
    void getdata() {
        cout << "enter c-rn and name: ";
        cin >> c_rn >> name;
    }

    void putdata() {
        cout << setw(5) << c_rn << setw(6) << name << endl;
    }
};

void write_obj() {
    student st;
    st.getdata();
    ofstream obj("std_info.txt", ios::out | ios::app | ios::binary);
    obj.write((char*) &st, sizeof(st));
    obj.close();
}

void read_obj() {
    student st; // Remove parentheses
    ifstream obj("std_info.txt", ios::in | ios::binary);
    while (obj.read((char*) &st, sizeof(st))) {
        st.putdata(); // Change st.display() to st.putdata()
    }
    obj.close();
}

int main() {
    for (int i = 0; i < 2; i++) {
        write_obj();
    }
    read_obj();
    return 0;
}
