#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <climits>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastIO_
    ll x, y, z;
    cin >> x >> y;
    z = x / y;
    if (x % y and (x*y) >= 0) z++;
    cout<<z<<endl;
    return 0;
}