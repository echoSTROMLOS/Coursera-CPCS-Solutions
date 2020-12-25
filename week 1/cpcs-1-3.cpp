#include<bits/stdc++.h>
using namespace std;
int main() {
	string s; cin>>s;
	long long len= s.size(), cnt=0;
	for (long long i=0; i<len; i++)
            if (s[i] == '9')
                cnt++;
    if (cnt == len) cout<<len+1<<endl;
    else cout<<len<<endl;
	return 0;
}
