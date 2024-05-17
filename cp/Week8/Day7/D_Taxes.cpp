#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define f1(n) for (int i = 0; i < n; i++)
#define f2(a, n) for (ll i = a; i < n; i++)
#define vi vector<long long>
#define pb push_back
#define sp << " "
#define endl "\n"
#define MOD 1000000007

using namespace std;

bool is_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}
void solve()
{
    ll n;
    cin >> n;

    if (is_prime(n))
        cout << 1 << endl;
    else if (n % 2 and !is_prime(n - 2))
        cout << 3 << endl;
    else
        cout << 2 << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    //  int test;
    //  cin >> test;
    //  while (test--)
    solve();
}