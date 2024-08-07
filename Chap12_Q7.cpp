//럭키 스트레이트
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;
    int counter = 0;

    //몇자리 수 인지 확인
    while ((N / num) != 0) {
        num = num * 10;
        counter++;
    }

    num = 1;
    for (int i = 0; i < counter / 2; i++) {
        num *= 10;
    }

    //첫번째 필드, 두번째 필드로 나눈다
    int firstField = N / num;
    int secondField = N % num;

    //첫번째 필드의 합과, 두번째 필드의 합을 구함
    int sum[2] = {0};
    for (int i = 0; i < counter / 2; i++) {
        sum[0] += firstField % 10;
        firstField /= 10;
        sum[1] += secondField % 10;
        secondField /= 10;
    }

    //합이 같은지 비교
    if(sum[0] == sum[1])
        cout << "LUCKY" << "\n";
    else
        cout << "READY" << "\n";
}
