#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    stack<int> st;
    string temp;
    cin >> s;
    int n = s.end() - s.begin();

    for (int t=0;t<n;t++) {
        if (s[t] > '0' && s[t] <= '9')
            st.push((int)s[t] - '0');
    }
    string res;

    for (int t=n-1;t>=0;t--) {
        if (s[t] == '[') {
            int r = st.top();
            st.pop();
            temp = res;
            for (int t=0;t<r-1;t++)
                res += temp;
        }

        if (s[t] >= 'a' && s[t] <= 'z')
            res = s[t] + res;
    }
    cout << res;
}
