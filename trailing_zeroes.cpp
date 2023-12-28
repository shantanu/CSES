#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    int ans = 0;

    int fivePow = 5;
    while (fivePow <= n) {
        ans += n / fivePow;
        fivePow *= 5;
    }

    cout << ans << endl;
}