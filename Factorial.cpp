#include <iostream>
using namespace std;

long long factorial(int N) {
    if (N == 0 || N == 1) 
        return 1;             
    return N * factorial(N - 1); 
}

int main() {
    int N;
    cout << "Enter the num of N: " << endl;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}