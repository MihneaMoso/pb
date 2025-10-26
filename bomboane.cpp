#include <fstream>
#include <numeric>
#include <algorithm>

using namespace std;

typedef long long ll;
ifstream cin("bomboane.in");
ofstream cout("bomboane.out");

int n, v[1001], M = 0;
int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> v[i];
    int suma = accumulate(v, v + n, 0);
    if (suma % n != 0) {
        cout << -1;
        return 0;
    } 
    int avg = suma / n;

    string output;

    auto minim = min_element(v, v + n);
    while (*minim != avg) {
        auto maxim = max_element(v, v + n);
        int moves = avg - *minim;
        int index_max = distance(v, maxim);
        int index_min = distance(v, minim);
        v[index_max] -= moves;
        v[index_min] += moves;
        output += to_string(index_max + 1);
        output.push_back(' ');
        output += to_string(index_min + 1);
        output.push_back(' ');
        output += to_string(moves);
        output.push_back('\n');
        minim = min_element(v, v + n);
        M++;
    }
    
    
    cout << M << "\n" << output;

    return 0;
}

