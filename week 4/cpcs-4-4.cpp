#include<iostream>
#include<iomanip>
#include<vector>
#include <climits>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <map>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef vector<ll> vl;
typedef vector<lli> vli;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll buff[100010], rec[100010];
int main()
{
    fastIO_
    ll n; cin>>n; ll arr[n+10];
    for (ll i=0; i<n; i++) {cin>>arr[i]; rec[i+1]= rec[i] + arr[i];}
    ll i=0, k=n-1, tmp=rec[n];
    while(k) buff[k] = buff[k+1] + arr[k], k--; i=0, k=n-1;
    while(i<n) rec[i + 1] = rec[i] <= rec[i+1]? rec[i]:rec[i+1],i++;
    while(k) buff[k] = buff[k+1]<=buff[k]? buff[k+1]:buff[k],k--;
    for (i=0; i<n; ++i) printf("%lld ", tmp-buff[i+1]-rec[i]);
}