#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    long long output = 0;

    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    for(int j = 0; j < n - 1; j++) {
        if(ar[j] > ar[j + 1]) {
            output += ar[j] - ar[j + 1];
            ar[j + 1] = ar[j];
        }
    }

    cout << output << endl;
}