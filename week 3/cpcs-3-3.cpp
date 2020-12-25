#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <cfloat>
#include <climits>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fastIO_
    long double ans=0.0;
    ll n; cin>>n; vector<long double> a(n);
    for (ll i=0; i<n; i++) cin>>a[i];
    for (long double i : a)
        ans += (i + (1/i));
    cout<<setprecision(11)<<ans<<endl;
    return 0;
}