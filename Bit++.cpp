#include <iostream>
using namespace std;

int main() {
    string s;
    int T;
    cin >> T;
    int x = 0;
    while (T--) {
        cin >> s;

        if (s == "X++" || s == "++X") ++x;
        if (s == "X--" || s == "--X") --x;
    }
    cout << x;
}