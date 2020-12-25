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
inline ll solRC(ll a) { return (a%3 == 1 or a%3 ==0) ? (a/3)* 2 : ((a/3)* 2)+1;}
int main() {
    fastIO_
    ll r, c;
    cin>>r>>c;
    if (r*c==1) cout<<0<<"\n";
    else if (r == 1) cout<<solRC(c)<<"\n";
    else if (c == 1) cout<<solRC(r)<<"\n";
    else cout<<c * solRC(r) + solRC(c)*(r-solRC(r))<<endl;
    return 0;
}