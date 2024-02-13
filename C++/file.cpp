#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream onfile;
    onfile.open("file.txt");
    onfile << "i m loving shikha";
    onfile.close();

    ifstream infile;
    string str;
    infile.open("file.txt");
    infile.seekg(0, ios::beg);
    while (getline(infile, str))
    {
        cout << str << infile.tellg() << "-" << endl;
    }
    infile.close();
}