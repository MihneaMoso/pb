#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int nMAX = 2 * 1e5;
int arr[nMAX + 1];

ll max(ll a, ll b) {
    if (a > b) return a;
    return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll minmoves = 0;
    ll n; cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    // ll last_i = arr[1], last_i1 = arr[0];
    ll maxn = arr[0];
    for (int i = 1; i < n; i++) {
        // cout << i << ":" << '\n';
        // cout << "arr[" << i << "]: " << arr[i] << '\n';
        // cout << "arr[" << i-1 << "]: " << arr[i-1] << '\n';
        // cout << "last i:    " << last_i << "\n";
        // cout << "last i - 1:" << last_i1 << "\n";
        // cout << "minmoves:" << minmoves << "\n";
        maxn = max(maxn, arr[i]);
        if (arr[i] < maxn) minmoves += (maxn - arr[i]);
        // last_i = arr[i];
        // last_i1 = arr[i-1];
        // arr[i] = arr[i-1];
    }
    cout << minmoves << '\n';

    return 0;
}