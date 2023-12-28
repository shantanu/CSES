#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    if (n == 4) {
        cout << "3 1 4 2" << endl;
        return 0;
    }

    int p1 = 1;
    int p2 = (n % 2 == 0) ? n/2+1 : n/2+2;
    
    while (p2 <= n) {
        cout << p1 << " " << p2 << " ";
        p1++;
        p2++;
    }

    if (n % 2 == 1) {
        cout << n/2+1;
    }
    cout << endl;


}