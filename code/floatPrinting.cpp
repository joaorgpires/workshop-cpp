#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 4 * atan(1)

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << left << setw(2) << setfill(' ') << i << ": ";
        cout << right << fixed << setw(15) << setprecision(12) << setfill(' ') << PI * i << endl;
    }
    
    return 0;
}
