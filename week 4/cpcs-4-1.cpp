#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include <cstring>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include <map>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
#define fastIO_ ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
string s;
int dp[30][50050];
void ansQuery(int l, int r)
{
    char result; int buffCnt=0;
    for (int i=0; i<=26; i++)
    {
        int d = dp[i][r] - dp[i][l-1];
        if (buffCnt <= d) buffCnt = d, result = toascii('a')+i;
    }
    printf("%c\n", result);
}
int main()
{
    fastIO_
    cin>>s; int len=s.size();
    for(char ch='a'; ch<='z'; ch++)
        for (int k=0; k<len; k++)
          dp[ch-'a'][k+1]= (ch == s[k])? dp[ch-'a'][k] + 1 : dp[ch-'a'][k];
    int Q; cin>>Q;
    for (int i=0; i<Q; i++)
    {
        int l, r;
        cin>>l>>r;
        ansQuery(l, r);
    }
}