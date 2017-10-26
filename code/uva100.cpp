// The 3n+1 problem a.k.a. Collatz Conjecture
#include <iostream>
#include <algorithm>

using namespace std;

int collatzSize(unsigned int n) {
    int sz = 1;

    while (n != 1) {
        sz++;
        
        if (n % 2 == 1) {
            n = 3 * n + 1;
        }
        else {
            n = n / 2;
        }
    }

    return sz;
}

int main() {
    // i, j given on the input description
    int I, J;

    while (cin >> I >> J) {
        int mx = -1;
        int st = min(I, J), en = max(I, J);

        for (int i = st; i <= en; i++) {
            mx = max(mx, collatzSize(i));
        }

        cout << I << " " << J << " " << mx << endl;
    }

    return 0;
}
