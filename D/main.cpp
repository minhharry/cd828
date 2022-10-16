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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
        vector<int> uoc2(n+5);
        for (int &x: a) cin >> x;

        for (int i = 2; i<=n; ++i)
        {
            int dem = 0, x = i;
            while (x%2==0)
            {
                ++dem;
                x/=2;
            }
            uoc2[i] = dem;
        }
        int tong  = 0;
        for (int x: a)
        {
            while (x%2==0)
            {
                x/=2;
                ++tong;
            }
        }
        sort(uoc2.begin(),uoc2.end(),greater<int>());
        int ans = 0;
        for (int i = 0; i<n; ++i)
        {
            if (tong<n)
            {
                tong += uoc2[i];
                ++ans;
            } else break;
        }
        if (tong<n)
        {
            cout << -1 << endl;
        } else
        {
            cout << ans << endl;
        }
    }
    return 0;
}

















