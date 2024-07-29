#include <iostream>
using namespace std;

int main() {
    int N; //볼링공 수
    int M; //볼링공 무게

    cin >> N >> M;
    int *ball = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> ball[i];
        if (ball[i] > M) {
            cout << "Error\n";
            break;
        }
    }

    int groupCount = 0;

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(ball[i] != ball[j]) {
                groupCount++;
            }
        }
    }

    cout << groupCount << '\n';
}
