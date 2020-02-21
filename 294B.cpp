#include <iostream>
#include <map>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <float.h>
#include <limits.h>
#include <stack>
#include <queue>
#include "unordered_map"
using namespace std;
#define MAX INT_MAX
#define MIN INT_MIN
#define INF 1e9
#define FASTER cin.sync_with_stdio(false);cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define ld long long int
typedef vector<int> vi;
typedef pair<int, int> pr;
typedef map<int, int> m_p;
typedef unordered_map<int, int> um;

int main() {
    int n;
    cin >> n;
    um m;
    int temp;
    for (int t=0;t<n;t++) {
        cin >> temp;
        ++m[temp];
    }

    for (int t=0;t<n-1;t++) {
        cin >> temp;
    }

    for (int t=0;t<n-2;t++) {
        cin >> temp;
        --m[temp];
    }
    for (auto t = m.begin(); t != m.end();t++) {
        for (int r=0;r<t->second;r++)
            cout << t->first << '\n';
    }
}
