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

string deck, str;

bool solve()
{
    if((str[1]==str[4])&&(str[4]==str[7])&&(str[7]==str[10]))
    {
        for(int i=0;i<13;i+=3)
        {
            if(str[i]<58&&str[i]>49)   deck[str[i]-48]='1';
            else if(str[i]=='A') 	   deck[1]=deck[14]='1';
            else if(str[i]=='T')	   deck[10]='1';
            else if(str[i]=='J')	   deck[11]='1';
            else if(str[i]=='Q')	   deck[12]='1';
            else if(str[i]=='K')	   deck[13]='1';
        }
        return deck.find("11111")!= string::npos;
    }
    return false;
}

int main()
{
    fastIO_
    getline(cin, str);
    deck="000000000000000";
    solve() ? cout<<"YES\n" : cout<<"NO\n";
}
