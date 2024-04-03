#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define si set<int>
#define pi priority_queue<long long>
using namespace std;
void solve()
{
    vector<pair<ll,ll>> v,vv,vvv;
    ll n,x;
    cin>>n;
    ll ai[n],aii[n],aiii[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb({x,i});
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vv.pb({x,i});
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vvv.pb({x,i});
    }
    sort(v.begin(), v.end(), greater<ll>());
    sort(vv.begin(), vv.end(), greater<ll>());
    sort(vvv.begin(), vvv.end(), greater<ll>());
    ll g=3,s=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(v[i].second!=vv[j].second && v[i].second!=vvv[k].second && vv[j].second!=vvv[k].second)
                s=max(s,(v[i].first+vv[j].first+vvv[k].first));
            }
        }
    }
    cout<<s<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}