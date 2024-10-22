#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin,input);
    int count=0;
    for (char c : input) {
        if (isdigit(c)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
