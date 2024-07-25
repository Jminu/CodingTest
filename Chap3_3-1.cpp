#include <iostream>
using namespace std;

int main() {
    int N = 1260;
    int cnt = 0;
    int coinType[4] = {500, 100, 50, 10};

    for(int i = 0; i < 4; i++) {
        int coin = coinType[i];
        cnt += (N / coin);
        N %= coin;
    }
    cout << cnt << '\n';
}