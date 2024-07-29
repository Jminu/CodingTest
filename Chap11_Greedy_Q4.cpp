#include <iostream>
using namespace std;

void sort(int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int minSum = 0;
    int N;
    cin >> N;

    int *arr;
    arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, N); //오름차순 정렬
    minSum = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > minSum) {
            minSum++;
            break;
        }
        minSum += arr[i];
    }

    cout << minSum << "\n";
}
