
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

int n, k;
vector<string> vs, ans;
int b[35];

void print()
{
    for(int i = 1; i <= k; ++i) cout << vs[b[i] - 1] << ' ';
    cout << endl;
}

void Try(int i)
{
    for(int j = b[i - 1] + 1; j <= vs.sz - k + i; ++j)
    {
        b[i] = j;
        if(i == k) print();
        else Try(i + 1);
    }
}

int main()
{
    faster();
    int t = 1;
    //cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string s;
        map<string, bool> m;
        for(int i = 0; i < n; ++i)
        {
            cin >> s;
            m[s] = 1;
        }
        for(auto &i : m) vs.pb(i.fi);
        Try(1);
    }
    return 0;
}


