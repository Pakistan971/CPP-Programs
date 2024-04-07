//6.	Write a program that display an number into word form.(Number into text)
#include <iostream>
using namespace std;
string number_to_words(int num) {
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string result;
    if (num >= 100) {
        result += ones[num / 100] + " Hundred ";
        num %= 100;
    }
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    } else if (num >= 10) {
        result += teens[num - 10];
        return result;
    }
    if (num > 0) {
        result += ones[num];
    }
    return result;
}
int main() {
    int num;
    cout << "Enter a number (0 to 999): ";
    cin >> num;
    if (num < 0 || num > 999){
        cout << "Invalid input. Please enter a number between 0 and 999." << endl;
        return 1; // Exit program with an error code
    }
    string wordForm = number_to_words(num);
    cout << "Word form of the number: " << wordForm << endl;
    return 0;
}
