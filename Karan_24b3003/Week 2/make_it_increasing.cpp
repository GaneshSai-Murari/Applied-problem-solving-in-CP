#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> p(n + 1);
        vector<vector<int>> children(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];
        for (int i = 1; i <= n; i++) {
            if (p[i] != i) 
                children[p[i]].push_back(i);
        }
        vector<bool> visited(n + 1, false);

        vector<int> leaves;
        for (int i = 1; i <= n; i++) {
            if (children[i].empty())
                leaves.push_back(i);
        }

        vector<vector<int>> paths;

        for (int leaf : leaves) {
            if (visited[leaf]) continue;
            vector<int> path;
            int cur = leaf;
            while (!visited[cur]) {
                path.push_back(cur);
                visited[cur] = true;
                if (p[cur] == cur) break; 
                cur = p[cur];
            }
            reverse(path.begin(), path.end());
            paths.push_back(path);
        }

        cout << (int)paths.size() << "\n";
        for (auto &path : paths) {
            cout << (int)path.size() << "\n";
            for (int v : path) cout << v << " ";
            cout << "\n";
        }
    }
    return 0;
}
