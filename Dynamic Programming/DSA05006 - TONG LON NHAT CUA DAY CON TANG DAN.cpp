
#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int main()
{
    faster();
    int t = 1, n, a[1005], dp[1005], res;
    cin >> t;
    while(t--)
    {
        res = -1;
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            dp[i] = a[i];
            for(int j = 0; j < i; ++j) if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
    return 0;
}
