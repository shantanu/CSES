#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    ll r, c;

    while (t--) {
        cin >> r >> c;

        if (r == 1 && c == 1) {
            cout << 1 << endl;
            continue;
        }

        ll m = max(r, c);
        
        ll sqr = 0, sqc = 0;
        if (m % 2 == 0) {
            sqr = m;
            sqc = 1;
        }
        else {
            sqr = 1;
            sqc = m;
        }

        ll dist = abs(r - sqr) + abs(c - sqc);
        ll square = m*m;

        cout << square - dist << endl;

    }
}