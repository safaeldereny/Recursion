#include <iostream>
using namespace std;

long long sumArray(int arr[], int n) {
    if (n == 0)  
        return 0;
    return sumArray(arr, n - 1) + arr[n - 1]; 
}

int main() {
    int N;
    cout << "Enter the num of N:"<<endl;
    cin >> N;  

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];  

    cout << sumArray(arr, N) << endl; 
    return 0;
}