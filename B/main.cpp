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
        int n,q;
        cin >> n >> q;
        vector<ll> a(n);
        ll tong = 0;
        ll odd = 0, even = 0;
        for (ll &x: a)
        {
            cin >> x;
            tong += x;
            if (x%2==0) {
                ++even;
            } else
            {
                ++odd;
            }
        }
        while (q--)
        {
            ll  type, x;
            cin >> type >> x;
            if (type==0)
            {
                tong += even*x;
                if (x%2==1)
                {
                    odd += even;
                    even = 0;
                }
            } else
            {
                tong += odd*x;
                if (x%2==1)
                {
                    even += odd;
                    odd = 0;
                }
            }

        cout << tong << endl;
        }
    }

    return 0;
}

















