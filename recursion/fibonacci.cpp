#include <iostream>
using namespace std;

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;
    
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    
    // Print Fibonacci series up to n
    cout << "\nFibonacci series (0 to " << n << "): ";
    for (int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    
    return 0;
}

/*
Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

How recursion works for fibonacci(4):

                    fib(4)
                   /      \
               fib(3)   +  fib(2)
              /     \      /    \
          fib(2) + fib(1) fib(1) + fib(0)
          /    \     |      |       |
      fib(1)+fib(0)  1      1       0
         |     |
         1     0

fib(4) = fib(3) + fib(2)
       = (fib(2) + fib(1)) + (fib(1) + fib(0))
       = ((1 + 0) + 1) + (1 + 0)
       = 3

Time Complexity: O(2^n) - exponential (many repeated calculations)
Space Complexity: O(n) - recursion stack depth

Note: This basic recursion is inefficient for large n.
For better performance, use:
1. Memoization (Top-down DP)
2. Tabulation (Bottom-up DP)
3. Iterative approach
*/
