#include <iostream>
#include "unordered_map"
using namespace std;

int main() {
    int T;
    string s, temp;
    unordered_map<char, char> u;

    cin >> T;
    while (T--) {
        for (char t = 'a'; t <= 'z'; t++) u[t] = ' ';
        temp.clear();
        cin >> s;
        int len = s.end() - s.begin();

        for (int t = 0; t < len; t++) {
            if (s[t] != s[t + 1]) {
                u[s[t]] = s[t];
                u[s[t + 1]] = s[t + 1];
            }
            ++t;
        }
        for (char t = 'a'; t <= 'z'; t++) {
            if (u[t] != ' ') temp += t;
        }
        cout << temp << '\n';
    }
}