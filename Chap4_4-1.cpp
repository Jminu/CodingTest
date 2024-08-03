#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    int positionX = 0;
    int positionY = 0;
    cin.ignore();

    string plan;
    getline(cin, plan);

    int count = 0;
    for (int i = 0; i < plan.length(); i++) {
        if (plan[i] != ' ') {
            count++;
        }
    }

    char *direction = new char[count];
    int j = 0;

    for (int i = 0; i < plan.length(); i++) {
        if (plan[i] != ' ') {
            direction[j] = plan[i];
            j++;
        }
    }

    for (int i = 0; i < count; i++) {
        if (direction[i] == 'L') {
            if (positionX == 0) {
                continue;
            } else {
                positionX--;
            }
        } else if (direction[i] == 'R') {
            if (positionX == N - 1) {
                continue;
            } else {
                positionX++;
            }
        } else if (direction[i] == 'U') {
            if (positionY == 0) {
                continue;
            } else {
                positionY--;
            }
        } else {
            if (positionY == N - 1) {
                continue;
            } else {
                positionY++;
            }
        }
    }
    delete[] direction;
    cout << positionY + 1 << " " << positionX + 1 << "\n";
}
