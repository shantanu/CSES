#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> count;
    for (auto c : s) {
        count[c]++;
    }

    if (s.size() % 2 == 0) {
        int fill = 0;
        for(auto [c, num] : count) {
            if (num % 2 == 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            for (int i = 0; i < num/2; i++) {
                s[fill+i] = c;
                s[s.size() - fill - i - 1] = c;
            }
            fill += num/2;
        }
        cout << s << endl;
    }
    else {
        int fill = 0;
        bool usedOdd = false;
        for (auto [c,num] : count) {
            if (num % 2 == 1) {
                if (usedOdd) {
                    cout << "NO SOLUTION" << endl;
                    return 0;
                }
                else {
                    s[s.size()/2] = c;
                    num--;
                    usedOdd = true;
                }
            }
            for (int i = 0; i < num/2; i++) {
                s[fill+i] = c;
                s[s.size() - fill - i - 1] = c;
            }
            fill += num/2;
            //cout << "filled until " << fill << ": " << s << endl;

        }
        cout << s << endl;
    }


}
