#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <queue>
#include <stack>
#include <climits>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll performOP(ll a, ll b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
    }
}
int main() {
    fastIO_
    string s; cin>>s;
    queue <ll> numbers;
    queue <char> operators;
    ll len = s.length();
    if (len == 1) cout<<s<<endl;
    for (ll i=0; i<len; i++)
    {
        if (isdigit(s[i]))
        {
            ll num = 0;
            while(isdigit(s[i]))
                num = num*10 + (s[i]-'0'), i++;
            i--;
            numbers.push(num);
        }
        else operators.push(s[i]);
    }
    ll ans = numbers.front();
    numbers.pop();
    while(!operators.empty())
    {
        char op = operators.front();
        operators.pop();
        ll b = numbers.front();
        numbers.pop();
        ans = performOP(ans, b, op);
    }
    cout<<ans<<endl;
    return 0;
}