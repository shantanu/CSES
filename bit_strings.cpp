#include <iostream>

const int MOD = 1e9+7;

using namespace std;
using ll = long long;

ll binmodexp(ll base, ll exp) {
    if (exp == 1) {
        return base % MOD;
    }
    if (exp % 2 == 0) {
        ll ans = binmodexp(base, exp/2);
        return (ans*ans) % MOD;
    }
    else {
        ll ans = binmodexp(base, exp/2);
        return (((ans*ans) % MOD) * base) % MOD;
    }
}

int main() {

    int n;
    cin >> n;

    cout << binmodexp(2, n) << endl;
}