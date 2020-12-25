#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, cnt=0,ans=0;
	cin>>n; vector<int> a(n);
	for (int i=0; i<n; i++)
        cin>>a[i];
    int m = *max_element(a.begin(), a.end());
    bool f = false;
    for (int i=0; i<n; i++)
        {
            if (a[i] == m)
                {
                    cnt++;
                    if (!f) ans=i, f=true;
                }
            if (cnt==3)
            {
                ans = i; break;
            }
        }
      for (int i=0; i<n; i++)
        {
            if (i==ans)
                continue;
            cout<<a[i]<<" ";
        }
        cout<<"\n";
	return 0;
}
