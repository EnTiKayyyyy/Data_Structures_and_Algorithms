
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
    int t = 1, n, k, x;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int i = s.length() - 1;
        while(s[i] == '0')
        {
            s[i] = '1';
            --i;
        }
        if(i < 0) F(i, 0, s.length()) cout << 1;
        else
        {
            s[i] = '0';
            cout << s;
        }
        cout << endl;
    }
    return 0;
}

