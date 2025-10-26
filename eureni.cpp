#include <fstream>
#include <stdio.h>

using namespace std;

typedef long long ll;
ifstream cin("eureni.in");
ofstream cout("eureni.out");

ll fast_exp(int base, int exp) {
    ll res = 1;
    while (exp > 0) {
        int last_bit = (exp & 1);
        if (last_bit) {
            res *= base;
        }
        base = base * base;
        exp >>= 1;
    }
    return res;
}

ll S;
int n, e;

int main() {
    
    cin >> S >> n >> e;

    ll power = fast_exp(e , n);
    // printf("Power: %lld  \n", power);
    while (power > S) {
        power /= e;
    }
    // printf("Power: %lld  \n", power);
    int banksum = 0;

    while (power) {
        if (power <= S) {
            int remainder = S % power;
            int res = S / power;
            S = remainder;

            banksum += res;
            cout << power << " " << res << "\n";
        }
        power /= e;
    }
    cout << banksum;
    return 0;
}