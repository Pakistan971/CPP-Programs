//5.	Write a program that concatenates two strings.
#include <iostream>
using namespace std;
int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    string result1 = str1 + str2;
    cout << "Concatenated string using + operator: " << result1 << endl;
    string result2 = str1;
    result2.append(str2);
    cout << "Concatenated string using append() function: " << result2 << endl;
    return 0;
}
