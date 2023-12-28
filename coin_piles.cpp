#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int a,b;
    while (t--) {
        cin >> a >> b;
        int care = min(a,b) - abs(a-b);

        if (care >= 0 && care % 3 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}