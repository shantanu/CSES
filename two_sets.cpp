#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll sum = n*(n+1)/2;

    if (sum % 2 == 1) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    if (n % 2 == 0) {
        cout << n/2 << endl;
        for (int i = 1; i <= n/4; i++) {
            cout << i << " " << n-i+1 << " ";
        }

        cout << endl;

        cout << n/2 << endl;
        for (int i = 0; i < n/2; i++) {
            cout << n/4+i+1 << " ";
        }
        cout << endl;
    }
    else {
        cout << n/2 << endl;
        cout << n << " ";
        for (int i = 1; i <= n/4; i++) {
            cout << i << " " << n-i << " ";
        }
        cout << endl;
        cout << n/2+1 << endl;
        for (int i = 0; i < n/2+1; i++) {
            cout << n/4+1+i << " ";
        }
        cout << endl;
    }
    return 0;
}