#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length();

    vector<string> v;
    string compStr;
    string totalStr;

    for(int i = 1; i <= s.length()/2; i++) { //몇 단위로 끊을 건지
        totalStr = "";
        compStr = s.substr(0, i); //현재 위치로 부터 단위로 끊음
        int counter = 1;

        for(int j = i; j <= s.length(); j += i) {
            if(compStr.compare(s.substr(j, i)) == 0) { //같다면
                counter++;
            }
            else { //다르면
                if(counter > 1) { //counter와 함께 출력(압축O)
                    totalStr.append(to_string(counter) + compStr);
                }
                else { //counter가 1이면 압축할 필요 X
                    totalStr.append(compStr);
                }
                compStr = s.substr(j, i); //비교할 문자열 바꿈
                counter = 1;
            }
        }

        //남은 문자열 처리
        if (counter > 1) {
            totalStr.append(to_string(counter) + compStr);
        } else {
            totalStr.append(compStr);
        }

        if(answer > totalStr.length()) {
            answer = totalStr.length();
        }

    }
    return answer;
}

int main() {
    string s;
    cin >> s;
    int n = solution(s);

    cout << n;
}