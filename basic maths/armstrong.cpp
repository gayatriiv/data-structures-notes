#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;
    
    // Count number of digits
    int count = 0;
    int temp = n;
    while (temp != 0) {
        count++;
        temp = temp / 10;
    }
    
    // Calculate sum of digits raised to power of count
    int sum = 0;
    while (n != 0) {
        int ld = n % 10;
        sum += (int)round(pow(ld, count));
        n = n / 10;
    }
    
    if (sum == original)
        cout << original << " is an Armstrong number" << endl;
    else
        cout << original << " is not an Armstrong number" << endl;
    
    return 0;
}
