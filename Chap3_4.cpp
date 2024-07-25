#include <iostream>
using namespace std;

int main() {
    int N;
    int K;
    int counter = 0;

    cin >> N >> K;

    while(1) {
        if(N == 1)
            break;
        if(N % K == 0) {
            N /= K;
            counter++;
        }
        else {
            N -= 1;
            counter++;
        }
    }

    cout << counter << '\n';
}