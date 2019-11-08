#include <iostream>
#include <vector>
#include "unordered_map"
#include <map>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    int temp, n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> v;
    auto itr = v.begin();

    for (int t=0;t<n;t++) {
        cin >> temp;
        v.emplace_back(temp);
        ++mp[temp];     
    }
    reverse(v.begin(), v.end());
    cout << mp[5] << endl;
    for (int t = v.size() - 1;t >= 0;t--) {
        auto mx = max_element(mp.begin(), mp.end())->first;
        // cout << mx << " ";
        cout << mp[v[t]] << " ";

    }

}
