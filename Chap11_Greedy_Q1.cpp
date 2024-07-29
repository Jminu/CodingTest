#include <iostream>
using namespace std;

int main() {
    int N;
    int *fearLevel;
    int arrLength;
    int groupCount = 0;
    int groupMemberCount = 0;
    cin >> N;

    fearLevel = new int[N];
    arrLength = N;

    for(int i = 0; i < arrLength; i++) {
        cin >> fearLevel[i];
    }

    //오름차순 정렬
    for(int i = 0; i < arrLength - 1; i++) {
        for(int j = i + 1; j < arrLength; j++) {
            if(fearLevel[i] > fearLevel[j]) {
                int temp = fearLevel[i];
                fearLevel[i] = fearLevel[j];
                fearLevel[j] = temp;
            }
        }
    }

    for(int i = 0; i < arrLength; i++) {
        groupMemberCount++;
        if(groupMemberCount >= fearLevel[i]) {
            groupCount++; //그룹 결성
            groupMemberCount = 0; //멤버 초기화
        }
    }

    cout << groupCount << '\n';
}