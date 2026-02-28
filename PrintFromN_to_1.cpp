#include <iostream>
using namespace std;

void printDescending(int n) {
    if (n == 0) 
        return;
    
    cout << n << " ";    
    printDescending(n - 1); 
}

int main() {
    int N;
    cout << "Enter the num of N: "<< endl;
    cin >> N;           
    printDescending(N); 
    return 0;
}