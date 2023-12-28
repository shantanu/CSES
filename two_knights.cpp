#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll bothOnEdge(ll k) {
    ll ans = (2*k-1)*(k-1);
    if (k >= 3) ans -= 2;
    return ans;
}

ll oneOnEdge(ll k) {
    ll ans = (k-1)*(k-1)*(2*k-1);
    ll bad = 0;
    // corner
    if (k >= 3) bad += 2;

    // sides
    if (k == 3) bad += 2*2;
    else if (k == 4) bad += 6*2;
    else if (k == 5) bad += 10*2;
    else if (k >= 6) {
        bad += 2*2 * 2;
        bad += 3*2 * 2;
        bad += (k-1-4) * 4 * 2; 
    }

    return ans - bad;
}

int main() {
    ll n;
    cin >> n;

    vector<ll> dp (n+1);

    dp[1] = 0;
    cout << 0 << endl;

    for (int k = 2; k <= n; k++) {
        dp[k] = dp[k-1];

        dp[k] += oneOnEdge(k);

        dp[k] += bothOnEdge(k);

        cout << dp[k] << endl;
    }

}