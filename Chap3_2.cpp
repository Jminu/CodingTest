#include <iostream>
using namespace std;

int main() {
    int N;
    int M;
    int K;
    int sum = 0;
    int counter = 0;

    cin >> N >> M >> K;
    int *arr = new int[N];
    int arrLength = N;

    //배열 삽입
    for(int i = 0; i < arrLength; i++) {
        cin >> arr[i];
    }

    //정렬 -> 여기서 왼쪽에서 2개 추출
    for(int i = 0; i < arrLength; i++) {
        for(int k = 0; k < arrLength; k++) {
            if(arr[k] < arr[k + 1]) {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for(int i = 0; i < M; i++) {
        if(counter == K) {
            sum += arr[1];
            counter = 0;
        } else {
            sum += arr[0];
            counter++;
        }
    }

    cout << sum << '\n';

    free(arr);
}