#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n & 1)
        cout << n+15 << " " << 15;
    else
        cout << n+10 << " " << 10;
}
