#include <stdio.h>
#define ll long long

void Urutkan(ll x, ll y[], ll z) {
    if (z == 0) {
        y[0] = x;
    } else {
        ll i = z - 1;
        while (i >= 0 && y[i] < x) {
            y[i + 1] = y[i];
            i--;
        }
        y[i + 1] = x;
    }
}

int main() {
    ll m, n, x;

    scanf("%lld %lld", &m, &n);
    ll max = m * n - m - n;
    scanf("%lld", &x);
    ll urutan[3] = {0};

    for (ll i = 0; i < x; i++) {
        ll a, temp = m;
        scanf("%lld", &a);

        if (a > max || (a % m) == 0 || (a % n) == 0) {
            Urutkan(a, urutan, 2);
        } else {
            while (temp < a) {
                if (((a - temp) % n) == 0) {
                    Urutkan(a, urutan, 2);
                    break;
                } else {
                    temp = temp + m;
                }
            }
        }
    }

    for (ll i = 0; i < 3; i++) {
        printf("%lld ", urutan[i]);
    }

    return 0;
}
