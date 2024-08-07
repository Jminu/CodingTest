//문자열 재정렬
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int sum = 0;
    string str;
    for (int i = 0; i < S.length(); i++) {
        if (isalpha(S[i]) != 0) { //알파벳이면
            str += S[i];
        }
        else { //숫자면, int로 바꿔서 누적시킴
            int num = S[i] - '0';
            sum += num;
        }
    }

    for (int i = 0; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if(str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << str << sum;
}
