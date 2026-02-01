#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Using map for hashing large numbers
    // Map can store any number as key (even 10^9 or negative numbers)
    map<int, int> freq;
    
    // Pre-compute: Store frequency of each number
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
    // Display all frequencies
    cout << "\nAll frequencies:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
    
    // Query
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;
    
    while (q--) {
        int num;
        cout << "Enter number to find frequency: ";
        cin >> num;
        
        // Fetch frequency - O(log n) for map, O(1) for unordered_map
        cout << "Frequency of " << num << ": " << freq[num] << endl;
    }
    
    return 0;
}

/*
Why use map instead of array for hashing?

Array Hashing Limitation:
- int hash[10^9] is NOT possible (too much memory)
- Negative numbers can't be array indices

Map Advantages:
- Can handle ANY number (large, small, negative)
- Only stores numbers that actually exist
- Memory efficient for sparse data

Example:
Array: [1000000000, 2, 1000000000, 3, 2, 2]

Using map:
┌─────────────┬───────────┐
│    Key      │ Frequency │
├─────────────┼───────────┤
│      2      │     3     │
│      3      │     1     │
│ 1000000000  │     2     │
└─────────────┴───────────┘

Time Complexity:
┌────────────────┬─────────────┬────────────────┐
│   Operation    │     map     │ unordered_map  │
├────────────────┼─────────────┼────────────────┤
│ Insert/Access  │  O(log n)   │    O(1) avg    │
│ Ordering       │   Sorted    │   No order     │
└────────────────┴─────────────┴────────────────┘

For even faster access, use unordered_map:
#include <unordered_map>
unordered_map<int, int> freq;
*/
