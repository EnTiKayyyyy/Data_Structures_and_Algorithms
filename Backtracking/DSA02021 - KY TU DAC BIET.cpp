
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
    int t = 1;
    cin >> t;
    ll n, x, tmp;
    string s;
    while(t--)
    {
        cin >> s >> n;
        x = s.sz;
        while (x < n) x <<= 1;
        while(x > s.sz)
        {
            tmp = x >> 1;
            if(n > tmp)
            {
                n -= tmp;
                --n;
                if(!n) n = tmp;
            }
            x >>= 1;
        }
        cout << s[n - 1] << endl;
    }
    return 0;
}
