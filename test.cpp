#include <iostream>
using namespace std;
int main() {
    string str = "Hello, World!";
    // Using a for loop to print each character of the string
    cout << "Individual characters of the string:" << endl;
    for (size_t i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}
