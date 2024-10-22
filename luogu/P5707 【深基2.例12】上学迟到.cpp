#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int s, v;
    cin >> s >> v;
    int time;
    time =(s + v - 1) / v + 10;
    int last_time = 480 - time;
	if (last_time < 0) {
		last_time += 24 * 60;
	}
    int hours = last_time / 60;
    int minutes = last_time % 60;
    cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << endl;
    return 0;
}

