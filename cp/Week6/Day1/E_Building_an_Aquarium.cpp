#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (int i = a; i < n; i++)
#define vi vector<int>
#define pb push_back
#define sp << " " <<
#define nl "\n"

using namespace std;


void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    f1(n) cin >> arr[i];
    // f1(n) cout <<  arr[i] << " ";

    ll l = 1, r = 1e10;

    while (l<r-1)
    {
        ll mid = l + (r-l) / 2;
        ll count(0);
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] < mid){
            count += (mid-arr[i]);
            }
        }
        // cout << mid sp count <<  endl;
        if(count>k) r=mid;
        else l=mid;
    }
    
    cout << l << endl;


}

int main()
{

    int test;
    cin >> test;
    while (test--)
    solve();
}