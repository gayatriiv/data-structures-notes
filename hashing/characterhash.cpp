#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    // Hash array for all characters (ASCII has 256 characters)
    // For lowercase only: int hash[26] = {0};
    int hash[256] = {0};
    
    // Pre-compute: Store frequency of each character
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]]++;
    }
    
    // Query: How many times to check
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    
    while (q--) {
        char c;
        cout << "Enter character to find frequency: ";
        cin >> c;
        
        // Fetch frequency in O(1) time
        cout << "Frequency of '" << c << "': " << hash[c] << endl;
    }
    
    return 0;
}

/*
Example:
Input string: "abracadabra"

Hash array (relevant entries):
hash['a'] = 5
hash['b'] = 2
hash['r'] = 2
hash['c'] = 1
hash['d'] = 1

Query: 'a' -> Output: 5
Query: 'b' -> Output: 2
Query: 'z' -> Output: 0

Time Complexity:
- Pre-computation: O(n) where n = string length
- Each query: O(1)
*/
