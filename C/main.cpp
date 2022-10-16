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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if (c=='g')
        {
            cout << 0 << endl;
            continue;
        }
        int dem = -1, ans = 0;
        for (int i = 0; i<n+n; ++i)
        {
            int pt = i;
            if (i>=n) pt = i-n;

            if (s[pt]==c&&dem == -1)
            {
                dem = 0;
                continue;
            }
            if (dem >= 0 && s[pt]!='g')
            {
                ++dem;
            }
            if (s[pt]=='g')
            {
                ++dem;
                ans = max(ans, dem);
                dem = -1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

















