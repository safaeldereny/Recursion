#include <iostream>
using namespace std;

void printRecursion(int n) {
    if (n == 0) 
        return;

    cout << "I love Recursion" << endl; 
    printRecursion(n - 1); 
}

int main() {
    int N;
    cout << "Enter num of N:" << endl;
    cin >> N;      
    printRecursion(N); 
    return 0;
}