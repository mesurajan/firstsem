
#include <iostream>


int& swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;

    // Returning a reference to one of the swapped integers
    return a;
}

int main() {
    using namespace std;

    int num1 = 5;
    int num2 = 10;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Calling the swap function and using return by reference to modify num1
    swap(num1, num2) = 20;

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}

