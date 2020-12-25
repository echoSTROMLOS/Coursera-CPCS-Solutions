#include<iostream>
#include<iomanip>
#include<vector>
#include <climits>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef vector<ll> vl;
typedef vector<lli> vli;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll ED[1005][1005];
int main()
{
    fastIO_
    ll n, m; cin>>n>>m;
    string u, w; cin>>u>>w;
    ll l, D, S; cin>>l>>D>>S;
    for (ll i=0; i<=n; i++)
    {
        for (ll j=0; j<=m; j++)
        {
            if (i==0 and j==0) ED[i][j] = 0;
            else if (i==0 or j==0) ED[i][j] = (!i) ? l+ED[i][j-1] : D+ED[i-1][j];
            else if (u[i-1] == w[j-1]) ED[i][j] = ED[i-1][j-1];
            else ED[i][j] = min(ED[i-1][j-1]+S, min(ED[i][j-1]+l, ED[i-1][j]+D));
        }
    }
    cout<<ED[n][m]<<endl;
}