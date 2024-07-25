#include <iostream>
using namespace std;

int main() {
    int N; //행
    int M; //열
    int **matrix = NULL;
    int *min_value_arr = NULL; //행 개수만큼
    int min_value;
    int max_value;

    cin >> N >> M;

    //2차원 배열 동적할당
    matrix = new int*[M];
    for(int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }

    min_value_arr = new int[N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    min_value = matrix[0][0];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(min_value > matrix[i][j]) {
                min_value = matrix[i][j];
            }
        }
        min_value_arr[i] = min_value;
        min_value = matrix[i][0];
    }

    max_value = min_value_arr[0];
    for(int i = 0; i < N; i++) {
        if(max_value < min_value_arr[i])
            max_value = min_value_arr[i];
    }

    cout << max_value << '\n';
}