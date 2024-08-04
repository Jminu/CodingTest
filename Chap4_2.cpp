#include <iostream>
#include <string>
using namespace std;

int main() {
    int positionRow;
    int positionCol;
    int counter = 0;

    char steps[8][2] = {
        {-2, -1},
        {-2, 1},
        {2, -1},
        {2, 1},
        {-1, -2},
        {-1, 2},
        {1, -2},
        {1, 2}
    };

    string position;
    cin >> position;

    positionCol = position[0] - 96; // 열 문자를 숫자로
    positionRow = position[1] - 48; //행 숫자(문자)를 integer로

    for (int i = 0; i < 8; i++) {
        int nextRow = positionRow + steps[i][0];
        int nextCol = positionCol + steps[i][1];
        if(nextRow > 0 && nextRow < 9 && nextCol > 0 && nextCol < 9) {
            counter++;
        }
    }

    cout << counter << '\n';
}
