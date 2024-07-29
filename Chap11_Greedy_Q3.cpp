#include <iostream>
#include <string>
using namespace std;

int main() {
    int *arr;
    string S;
    cin >> S;

    arr = new int[S.length()];
    for (int i = 0; i < S.length(); i++) {
        arr[i] = S[i] - 48;
    }

    int groupOne = 0;
    int groupZero = 0;

    if (arr[0] == 0) {
        groupZero++;
    } else {
        groupOne++;
    }

    for (int i = 1; i < S.length(); i++) {
        if (arr[i] != arr[i - 1]) {
            if (arr[i] == 0) {
                groupZero++;
            } else {
                groupOne++;
            }
        }
    }

    if (groupZero < groupOne) {
        cout << groupZero << "\n";
    } else {
        cout << groupOne << "\n";
    }
}
