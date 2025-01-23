#include <iostream>
using namespace std;

void printName(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    string name;
    cin >> name;
    printName(name);
    return 0;
}

