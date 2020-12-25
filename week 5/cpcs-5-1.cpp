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
int main()
{
    fastIO_
    ll n; cin>>n; vl a (n);
    for (auto &i : a) cin>>i;
    set<ll> s; set<ll>:: iterator it;
    for (ll i=0; i<n; i++)
    {
        if (s.insert(a[i]).second)
        {
            it = s.find(a[i]); it++;
            if (it != s.end()) s.erase(it);
        }
    }
    cout<<s.size()<<endl;
}