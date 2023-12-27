#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll total = 0;

    int prev = 0;
    cin >> prev;

    int cur = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> cur;

        if (cur < prev) {
            total += prev-cur;
            cur = prev;
        }
        prev = cur;
        
    }
    cout << total << endl;
}