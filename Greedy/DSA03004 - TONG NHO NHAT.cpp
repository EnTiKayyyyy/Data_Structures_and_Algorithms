
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
    int t = 1, n, x;
    cin >> t;
    ll a, b;
    while(t--)
    {
        priority_queue<int, vi, greater<int>> pq;
        cin >> n;
        while(n--)
        {
            cin >> x;
            pq.push(x);
        }
        a = b = 0;
        bool check = 0;
        while(pq.sz)
        {
            if(!check) a = a * 10 + pq.top();
            else b = b * 10 + pq.top();
            pq.pop();
            check ^= 1;
        }
        cout << a + b << endl;
    }
    return 0;
}
