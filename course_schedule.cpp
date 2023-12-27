#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
 
 
using namespace std;
using Graph = unordered_map<int, vector<int>>;
 
vector<int> topsort;
 
// return false if cycle detected
bool dfs(int v, vector<int>& vis, const Graph& g) {
    vis[v] = 1;
    // cout << "visiting " << v << endl;
    if (g.find(v) != g.end()) {
        for (int neigh: g.at(v)) {
            //cout << "checking " << neigh << endl;
            if (vis[neigh] == 1) {return false; } // back edge
            else if (vis[neigh] == 2) { continue; } // forward or tree edge
            else {
                if (!dfs(neigh, vis, g)) {
                    return false;
                }
            }
        }
    }
    vis[v] = 2;
    topsort.push_back(v);
    return true;
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    Graph g;
    // a->b implies that a must come before b
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
 
    vector<int> vis(n+1);
    for (int course = 1; course <= n; course++) {
        if (!vis[course]) {
            if (!dfs(course, vis, g)) {
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }
 
    reverse(topsort.begin(), topsort.end());
    for (int c : topsort) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
 
 
}
