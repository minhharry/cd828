#include <bits/stdc++.h>
#define MP make_pair
#define PB push_back
#define INF INT_MAX
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

using namespace std;

typedef pair <int, int> pii;
typedef long long ll;
typedef unsigned long long ull;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef cbaaabc
    freopen("debug.inp","r",stdin);
    freopen("debug.out","w",stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x: a) cin >> x;
        string s;
        cin >> s;
        string s2;
        for (int i = 0; i<n; ++i) s2+=' ';
        for (int i = 0; i<n; ++i)
        {
            if (s2[i]!=s[i] && s2[i]==' ')
            {
                s2[i]=s[i];
                for (int j = i; j<n; ++j)
                {
                    if (a[j]==a[i])
                    {
                        s2[j]=s[i];
                    }
                }
            }
        }
        cout << (s==s2?"YES":"NO") << endl;
    }
    return 0;
}

















