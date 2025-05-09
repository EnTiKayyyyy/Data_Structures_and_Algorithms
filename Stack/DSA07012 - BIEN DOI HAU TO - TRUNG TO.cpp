
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
    int t = 1;
    cin >> t;
    string s, tmp;
    while(t--)
    {
        cin >> s;
        stack<string> st;
        for(char &i : s)
        {
            if(isalpha(i)) st.push(string(1, i));
            else
            {
                tmp = st.top();
                st.pop();
                tmp = st.top() + i + tmp;
                st.pop();
                tmp = '(' + tmp + ')';
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
