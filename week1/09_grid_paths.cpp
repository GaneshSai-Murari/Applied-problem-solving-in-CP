#include <iostream>
using namespace std;

const int N = 7;
const int STEPS = 48;

char path[STEPS];
bool visited[N][N];
int result = 0;


int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
char dirs[] = {'U', 'D', 'L', 'R'};

void dfs(int x, int y, int step) {
   
    if (x == 0 && y == N - 1) {
        if (step == STEPS) result++;
        return;
    }

    if (step >= STEPS) return;

    visited[y][x] = true;

    char move = path[step];
    for (int i = 0; i < 4; i++) {
        if (move != '?' && move != dirs[i]) continue;

        int nx = x + dx[i], ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
        if (visited[ny][nx]) continue;

        dfs(nx, ny, step + 1);
    }

    visited[y][x] = false;
}

int main() {
    for (int i = 0; i < STEPS; ++i) cin >> path[i];
    dfs(0, 0, 0);
    cout << result << endl;
    return 0;
}
