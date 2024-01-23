#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outputFile("file2.txt");
    outputFile << "This is line 1.\nThis is line 2.\nThis is line 3.\n";
    outputFile.close();

    ifstream inputFile("file2.txt");
    inputFile.seekg(0, ios::beg);

    string line;
    while (getline(inputFile, line)) {
        cout << "Position: " <<inputFile.tellg()<<"-"<<line<<endl;
    }

    inputFile.close();

    return 0;
}
