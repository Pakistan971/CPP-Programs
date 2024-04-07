//7.	Write a program that checks the string entered by user is palindrome or not.
#include <iostream>
#include <string>
#include <cctype> // For std::tolower()
using namespace std;
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;
    // Compare characters from left and right ends of the string
    while (left < right) {
        // Skip non-alphanumeric characters from the left
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        // Skip non-alphanumeric characters from the right
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        // Convert characters to lowercase for case-insensitive comparison
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Palindrome
}
int main() {
    string input;
    cout << "Enter a string to check if it's a palindrome: ";
    getline(cin, input);
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
