#include <math.h>
#include <iostream>
using namespace std;

int getNearestPower3(int n) {
    if (n == 1) return 0;
    int x = 1;
    while (pow(3, x) <= n) {
        ++x;
    }
    return --x;
}

int getGoodNumber(int n) {
    int temp = n;
    
    while (true) {
        temp = pow(3, getNearestPower3(temp));

        cout << "Temp: " << temp << " " << "n: " << n << endl;
        if (n - temp >= 0) n -= temp;

        if (n == 0) return true;

        if (temp == 1 && n != 0) return false;
    }
}

int main() {
    int n, T;
    cin >> T;
    while (T--) {
        cin >> n;
        if (n == 1)
            {cout << 1 << '\n'; continue;}
        // cout << getNearestPower3(n);
        while (!getGoodNumber(n)) ++n;

        cout << n << '\n';
    }
}