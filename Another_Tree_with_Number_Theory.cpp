#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define PI  3.14159265358979323846
#define MOD 1000000007
ll ssum(ll n) {return (n * (n + 1)) / 2;}
ll gcd(ll a, ll b) {if (b == 0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b){return (a*b)/(__gcd(a,b));}
vector<ll> abhishek;
vector<ll> dhar[100001];

ll c(ll a)
{
    return dhar[a].size();
}

ll sum = 0;

void start(ll n, ll ts)
{
    if (c(n))
    {
        if (ts % c(n) == 0)
        {
            for (auto child : dhar[n])
            {
                start(child, ts / c(n));
            }
        }
        else
        {
            sum += ts;
        }
    }
}

int main()
{
        ll n;
        cin >> n;
        abhishek.clear();
        abhishek.resize(n + 1);
        for(ll i=0;i<n+1;i++)
        {
            abhishek[i] = 0;
        }
        for(ll i=1;i<n;i++)
        {
            cin >> abhishek[i];
            dhar[abhishek[i]].push_back(i + 1);
        }
        ll d;
        cin >> d;
        while (d--)
        {
            ll m, n;
            cin >> m >> n;
            sum = 0;
            start(m, n);
            cout << sum << "\n";
        }
    return 0;
}