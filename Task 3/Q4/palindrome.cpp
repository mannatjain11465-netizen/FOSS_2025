#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string or number: ";
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "It is a palindrome.";
    else
        cout << "It is NOT a palindrome.";

    return 0;
}
