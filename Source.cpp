
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll power = 1;
    ll u = 1ll * pow(10, k);
    for (ll i = 1; i <= m; i++) {
        power = power * n % u;
        power = power % u;
    }
    cout << power;
    return 0;
}
