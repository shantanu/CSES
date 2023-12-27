#include <iostream>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll expectedSum = (n * (n+1)) / 2;

    ll sum = 0;
    ll a;

    for (int i = 0; i < n-1; i++) {
        cin >> a;
        sum += a;
    }
    cout << expectedSum - sum << endl;
}