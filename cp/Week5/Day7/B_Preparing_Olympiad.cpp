#include<bits/stdc++.h>
using namespace std;
#define ll long long
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,l,r,x;cin>>n>>l>>r>>x;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    int ans=0;
    for(int mask=0;mask<(1<<n);mask++)
    {
        int sum=0,mx=0,mn=1e9,cnt=0;
        for(int i=0;i<n;i++)
        {
            if((mask>>i)&1)
            {
                cnt++;
                sum+=c[i];
                mx=max(mx,c[i]);
                mn=min(mn,c[i]);

            }
        }
        if(cnt>=2&&sum>=l&&sum<=r&&mx-mn>=x)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}