
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
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int BFS(int n)
{
    queue<pair<int, int>> q;
    q.push({n, 0});
    int f, s;
    while(q.sz)
    {
        f = q.front().fi;
        s = q.front().se;
        q.pop();
        if(f == 1) return s;
        if(f % 3 == 0) q.push({f / 3, s + 1});
        if((f & 1) ^ 1) q.push({f >> 1, s + 1});
        q.push({f - 1, s + 1});
    }
    return 0;
}

int main()
{
    faster();
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << BFS(n) << endl;
    }
    return 0;
}
