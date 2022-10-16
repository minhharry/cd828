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

int check(int a, int x, int y)
{
    if (x<a && a<=y) return a;
    return -1;
}
int ok(int a, int x, int y)
{
    int ans = (x/a+1)*a;
    return check(ans,x,y);
}

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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (2*a<=c && 2*b<=d)
        {
            cout << 2*a << ' ' << 2*b << endl;
            continue;
        }
        int x = ok(b,a,c), y = ok(a,b,d);
        if (x!=-1 && y!=-1)
        {
            cout << x << ' ' << y << endl;
            continue;
        }
        if (check(a*b,a,c)!=-1)
        {
            cout << a*b << ' ' << d << endl;
            continue;
        }
        if (check(a*b,b,d)!=-1)
        {
            cout << c << ' ' << a*b << endl;
            continue;
        }
        cout << "-1 -1" << endl;
    }
    return 0;
}

















