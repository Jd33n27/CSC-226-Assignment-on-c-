#include <iostream>
using namespace std;

// Function 1: Adds two integers
int addNumbers(int a, int b) {
    return a + b;
}

// Function 2: Greets the user
void greetUser(string name) {
    cout << "Hello, " << name << "! Welcome to C++ world." << endl;
}

int main() {
    // Calling the functions
    int sum = addNumbers(10, 20);
    cout << "The sum is: " << sum << endl;

    greetUser("Jamal");

    return 0;
}