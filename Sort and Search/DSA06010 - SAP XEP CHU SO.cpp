
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

int main()
{
    faster();
    int t = 1, n;
    cin >> t;
    string s;
    while(t--)
    {
        bool f[15] = {};
        cin >> n;
        while(n--)
        {
            cin >> s;
            for(char i : s) if(isdigit(i)) f[i - '0'] = 1;
        }
        for(int i = 0; i < 10; ++i) if(f[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
