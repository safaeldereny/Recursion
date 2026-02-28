#include <iostream>
#include <vector>
using namespace std;

void printEvenReverse(const vector<int>& A, int index) {
    if (index < 0) 
    return;       
    cout << A[index] << " ";     
    printEvenReverse(A, index - 2); 
}

int main() {
    int N;
    cout << "Enter the num of N:"<< endl;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    int lastEvenIndex = (N - 1) % 2 == 0 ? N - 1 : N - 2;
    printEvenReverse(A, lastEvenIndex);

    return 0;
}