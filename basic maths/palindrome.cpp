#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;  // Store original number
    int revNum = 0;
    while (n != 0) {
        int ld = n % 10;
        revNum = revNum * 10 + ld;
        n = n / 10;
    }

    if (original == revNum)
        cout << original << " is a Palindrome" << endl;
    else
        cout << original << " is Not a Palindrome" << endl;
    
    return 0;
}
