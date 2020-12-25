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
ll n, a[100100];
int main()
{
    fastIO_
    cin>>n>>a[0];
    cout<<"1 1\n";
    ll l=1, r=1, mx=a[0], mn=a[0];
    for (ll i=1; i<n; i++)
    {
        cin>>a[i];
        if (a[i]>mx) mx = a[i], r = i+1;
        if (a[i]<mn) mn = a[i], l = i+1;
        cout<<min(l, r)<<" "<<max(l, r)<<"\n";
    }
}