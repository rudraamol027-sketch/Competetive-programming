#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 10, 8};

    int max = vec[0];
    int sec_max = 0;
    bool found = false;

    for (int i = 1; i < vec.size(); i++) {

        if (vec[i] > max) {
            sec_max = max;
            max = vec[i];
            found = true;
        }
        else if (vec[i] != max && (!found || vec[i] > sec_max)) {
            sec_max = vec[i];
            found = true;
        }
    }

    if (found)
        cout << sec_max;
    else
        cout << "No second largest distinct element";
}