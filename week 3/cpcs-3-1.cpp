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
    ll n; cin>>n;
    double sa=0.0, sb=0.0;
    vector <double> a(n), b(n);
    for (auto &in: a) cin>>in;
    for (auto &in: b) cin>>in;
    for (ll i=0; i<n; i++)
        sa += a[i], sb += b[i];
    double EPSILON = 10e-5;
    if (EPSILON > abs(sb-sa)) cout<<"SUM(A)=SUM(B)\n";
    else if (sa < sb - EPSILON) cout<<"SUM(A)<SUM(B)\n";
    else cout<<"SUM(A)>SUM(B)\n";
    return 0;
}