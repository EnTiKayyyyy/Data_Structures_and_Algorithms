
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

int n, k, a[20] = {};

void print()
{
    for (int i = 1; i <= n; ++i) cout << a[i];
    cout << endl;
}
 
void Try(int i)
{
    for (int j = 0; j <= 1; ++j)
    {
        a[i] = j;
        if(i == n)
        {
            int cnt = 0;
            for (int i = 1; i <= n; ++i) cnt += a[i];
            if(cnt == k) print();
        }
        else Try(i + 1);
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}