#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int maxRep = 1;
    int curRep = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            curRep++;
        }
        else {
            maxRep = max(maxRep, curRep);
            curRep = 1;
        }
    }
    maxRep = max(maxRep, curRep);
    cout << maxRep << endl;
}