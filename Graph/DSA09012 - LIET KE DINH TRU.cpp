
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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int dis[1005], low[1005], par[1005], v, e, cnt;
bitset<1005> bs;
vector<vector<int>> a;
set<int> res;

inline void Pre()
{
    a.clear();
    res.clear();
    a.resize(v + 5);
    cnt = 1;
    bs.reset();
    memset(dis, 0, v + 5);
    memset(low, 0, v + 5);
    memset(par, 0, v + 5);
}

inline void DFS(int u)
{
    bs[u] = 1;
    int child = 0;
    dis[u] = low[u] = cnt++;
    for(int &i : a[u])
    {
        if(!bs[i])
        {
            ++child;
            par[i] = u;
            DFS(i);
            low[u] = min(low[u], low[i]);
            if(low[i] >= dis[u] and par[u]) res.insert(u);
        }
        else if(i != par[u]) low[u] = min(low[u], dis[i]);
    }
    if(child > 1 and !par[u]) res.insert(u);
}

int main()
{
    faster();
    int t = 1, x, y;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        Pre();
        while(e--)
        {
            cin >> x >> y;
            a[x].pb(y);
            a[y].pb(x);
        }
        for(int i = 1; i <= v; ++i)
            if(!bs[i])
                DFS(i);
        for(int i : res) cout << i << ' ';
        cout << endl;
    }
    return 0;
}


// Brute Force
//int v, e;
//
//inline void BFS(vector<vector<int>> &a, bitset<1005> &bs, int x)
//{
//    queue<int> q;
//    q.push(x);
//    bs[x] = 1;
//    int u;
//    while(q.sz)
//    {
//        u = q.front();
//        q.pop();
//        for(int &i : a[u])
//        {
//            if(!bs[i])
//            {
//                bs[i] = 1;
//                q.push(i);
//            }
//        }
//    }
//}
//
//inline int Try(vector<pair<int, int>> &vp, int val)
//{
//    vector<vector<int>> a(v + 5);
//    bitset<1005> bs;
//    int cnt = 0;
//    for(int i = 0; i < vp.sz; ++i)
//    {
//        if(vp[i].fi == val or vp[i].se == val) continue;
//        a[vp[i].fi].pb(vp[i].se);
//        a[vp[i].se].pb(vp[i].fi);
//    }
//    for(int i = 1; i <= v; ++i)
//    {
//        if(!bs[i] and i != val)
//        {
//            ++cnt;
//            BFS(a, bs, i);
//        }
//    }
//    return cnt;
//}
//
//int main()
//{
//    faster();
//    int t = 1, x, y;
//    cin >> t;
//    while(t--)
//    {
//        cin >> v >> e;
//        vector<pair<int, int>> vp;
//        vector<vector<int>> a(v + 5);
//        bitset<1005> bs;
//        for(int i = 0; i < e; ++i)
//        {
//            cin >> x >> y;
//            a[x].pb(y);
//            a[y].pb(x);
//            vp.pb({x, y});
//        }
//        int cnt = 0;
//        for(int i = 1; i <= v; ++i)
//        {
//            if(!bs[i])
//            {
//                ++cnt;
//                BFS(a, bs, i);
//            }
//        }
//        for(int i = 0; i < vp.sz; ++i)
//            if(cnt < Try(vp, i))
//                cout << i << ' ';
//        cout << endl;
//    }
//    return 0;
//}
