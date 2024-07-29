#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int sum = 0;
    int *arr;
    cin >> S;

    arr = new int[S.length()];
    for(int i = 0; i < S.length(); i++) {
        arr[i] = S[i] - 48;
    }

    int k = 0;
    //0과 1일땐, 곱하는 경우보다 더하는 경우가 더 큼
    for(int i = 0; i < S.length(); i++) {
        if(arr[i] != 0 && arr[i] != 1) {
            if(k == 0) { //처음에만
                sum = arr[i] * arr[i + 1];
                i++;
                k++;
            }
            else {
                sum = sum * arr[i];
            }l
        }
        else {
            if(k == 0) { //처음에만
                sum = arr[i] + arr[i + 1];
                i++;
                k++;
            }
            else {
                sum = sum + arr[i];
            }
        }
    }

    cout << sum << '\n';
}