#include <iostream>

using namespace std;

void knightNonAttackingPositions(int n) {
    for (int k = 1; k <= n; ++k) {
        
        long long totalPairs = (1LL * k * k * (k * k - 1)) / 2;
        long long attackingPairs = 0;
        if (k >= 3) {
            attackingPairs = 4LL * (k - 1) * (k - 2);
        }

        long long nonAttacking = totalPairs - attackingPairs;

        cout << nonAttacking << endl;
    }
}

int main() {
    int n;
    
    cin >> n;

    knightNonAttackingPositions(n);

    return 0;
}
