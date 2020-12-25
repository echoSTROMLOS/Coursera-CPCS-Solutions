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
    ll n;
    cin >> n;
    ll arr[n][n];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            cin >> arr[i][j];
    ll m[9] = {0,1,2,3,4,5,6,7,8};
    ll ans[9], min_cost = INT_MAX;
    do
    {
        ll buff = 0;
        for (ll i=0; i<n-1; i++)
            buff += arr[m[i]][m[i+1]];
        min_cost = min(min_cost, buff);
        if (min_cost==buff){
            for (ll i=0; i<n; i++)
                ans[i] = m[i]+1; }
    } while(next_permutation(m, m+n));
    reverse(ans, ans+n);
    for (ll i=0; i<n; i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}