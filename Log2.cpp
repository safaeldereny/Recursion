#include <iostream>
using namespace std;

long long log2_recursive(long long n) {
    if (n == 1) return 0;           
    return 1 + log2_recursive(n / 2); 
}

int main() {
    long long N;
    cin >> N;
    cout << log2_recursive(N) << endl;
    return 0;
}