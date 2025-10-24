#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll s;
int n, k = 0;
int v[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v + n);
    int i = 0;
    while (i < n && s >= v[i]) {
        s -= v[i];
        i++, k++;
    }
    int p;
    if (i == n) p = 0;
    else p = v[i] - s;
    cout << k << " " << p;
    return 0;
}