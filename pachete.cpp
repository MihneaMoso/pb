#include <fstream>

using namespace std;

typedef long long ll;
ifstream cin("pachete.in");
ofstream cout("pachete.out");

int find_index(int a[], int num_elements, int value) {
    int i;
    for (i = 0; i < num_elements; i++) {
        if (a[i] == value) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int n, v[102], M = 0;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    v[n] = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] != i + 1) {
            swap(v[i], v[n]);
            M++;
            int correct_index = find_index(v, n, i + 1);
            swap(v[i], v[correct_index]);
            M++;
        }
    }

    return 0;
}