#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N; //시

    int counter = 0;


    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            for (int second = 0; second < 60; second++) {
                if (hour > N)
                    break;

                string chour = to_string(hour);
                string cminute = to_string(minute);
                string csecond = to_string(second);

                if (chour.find("3") != -1 || cminute.find("3") != -1 || csecond.find("3") != -1) {
                    counter++;
                }
            }
        }
    }

    cout << counter << "\n";
}
