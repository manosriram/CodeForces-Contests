#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    if (m == 0)
        cout << 1;
    else if (m == n)
        cout << 0;
    else if (m > n/2)
        cout << n-m;
    else
        cout << m;
}
