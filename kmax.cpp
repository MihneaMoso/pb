// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// int v[1001], n, k;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
    
//     cin >> n;
//     for (int i = 0; i < n; i++) cin >> v[i];
//     cin >> k;

//     sort(v, v + n);

//     int i = 0;
//     while (i < n && k > 0 && v[i] < 0) {
//         v[i] = -v[i];
//         i++, k--;
//     }
//     sort(v, v + n);

//     if (k % 2 == 1) v[0] = -v[0];

//     ll suma = accumulate(v, v + n, 0LL);
//     cout << suma;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int v[1001], n, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> k;

    // 1. Sortăm șirul pentru a găsi cele mai mici k elemente
    sort(v, v + n);

    // 2. Schimbăm semnul primelor k elemente (cele mai mici)
    // Acestea sunt elementele care, adunate, dau suma minimă.
    for (int i = 0; i < k; i++) {
        v[i] = -v[i];
    }

    // 3. Calculăm suma finală
    // Folosim 0LL (un long long) ca valoare inițială pentru accumulate
    // pentru a forța calculul sumei pe 64 de biți și a evita depășirea.
    ll suma = accumulate(v, v + n, 0LL);
    cout << suma;

    return 0;
}