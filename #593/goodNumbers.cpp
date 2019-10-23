#include <math.h>
#include <iostream>
using namespace std;

bool isPower(int x) {
    while (x%3 == 0)  x = x / 3;

    return x == 1;
}

int getNearestPower3(int n) {
    if (n == 1) return 0;

    int x = 0;
    while (pow(3, x) < n) {
        ++x;
    }
    return --x;
}

bool getGoodNumber(int n) {
    if (isPower(n))
        return true;

    int temp = n;
    
    while (temp != 1) {
        temp = pow(3, getNearestPower3(temp));
        
        // cout << "Temp: " << temp << " " << "n: " << n << endl;
        if (n - temp >= 0) n -= temp;

        if (n == 0) return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n == 1)
            {cout << 1 << '\n'; continue;}
    
        while (!getGoodNumber(n)) ++n;
        cout << n << '\n';
    }
}