#include <fstream>
#include <map>
#include <stdio.h>

using namespace std;
ifstream cin("spectacole.in");
ofstream cout("spectacole.out");

typedef long long ll;
int n;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    
    cin >> n;
    map<int, int> m;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        m[x] = y;
        printf("x = %i, y = %i\n", x ,y);
    }

    int i = 0;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << "Elems nr " << i << " : " << it->first << " " << it->second << '\n';
        ++i;
    }


    return 0;
}