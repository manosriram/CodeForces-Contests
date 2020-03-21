#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
#include "unordered_map"
#define F first
#define S second
#define ll long long int
#define pb push_back
#define debug cout << "hi" << '\n';
#define FASTER cin.sync_with_stdio(false);cin.tie(NULL);
using namespace std;

bool uni(string s) {
    for (int t=0;t<s.length();++t) {
        if (s[t] == '?') continue;
        if (s[t] == s[t+1]) return false;
    }

    return true;
}

void Solve(string s) {
    map<pair<char, char>, char> mp;
    mp[make_pair('a', '?')] = 'b';    
    mp[make_pair('b', '?')] = 'a';    
    mp[make_pair('c', '?')] = 'a';    
    mp[make_pair('a', 'a')] = 'b';    
    mp[make_pair('a', 'b')] = 'c';    
    mp[make_pair('a', 'c')] = 'b';    
    mp[make_pair('b', 'a')] = 'c';    
    mp[make_pair('b', 'b')] = 'a';    
    mp[make_pair('b', 'c')] = 'a';    
    mp[make_pair('c', 'a')] = 'b';    
    mp[make_pair('c', 'b')] = 'a';    
    mp[make_pair('c', 'c')] = 'a';    

    int t;
    if (s[0] == '?') s[0] = (s[1] == 'a') ? 'b' : 'a';

    for (t=1;t<s.length()-1;++t)
        if (s[t] == '?')
            s[t] = mp[make_pair(s[t-1], s[t+1])];

    if (s[s.length() - 1] == '?')
        s[s.length() - 1] = s[s.length() - 2] == 'a' ? 'b' : 'a';

    cout << s << '\n';
    return;
}

int main() {
    FASTER;
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in", "r", stdin);
#endif

    int T;
    cin >> T;
    string s;
    while (T--) {
        cin >> s;
        if (!uni(s)) {
            cout << -1 << '\n';
            continue;
        }

        Solve(s);
    }

#ifndef ONLINE_JUDGE
    cout << "Time Taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
#endif
}
