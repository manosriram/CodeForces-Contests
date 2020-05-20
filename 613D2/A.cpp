#include <iostream>
using namespace std;
int main() {
    int n;string s;
    cin >> n >> s;

    int l = 0, r = 0;
    for (auto t: s) {
        if (t == 'L') --l;
        else ++r;
    }
    cout << 1+(r-l);
}

