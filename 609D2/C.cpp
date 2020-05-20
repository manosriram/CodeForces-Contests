#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s, ss;
    cin >> s;
    ss = s;

    for (int t=0;t<k;++t) {
        for (int tt=t+k;tt<s.length();tt+=k) {
            if (s[t] != s[tt]) {
                s[tt] = s[t];
            }
        }
    }
    if (s < ss) {
        for (int t=1;t<s.length();t+=k) {
            if (t & 1) {
                string sx('0', s.length()-t);
                s[t] = '1';
                string sxx = std::to_string(stoi(sx) + stoi(s));
                s = sxx;
            }
        }
    }

    cout << s.length() << endl;
    cout << s;
}

