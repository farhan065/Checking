#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
using namespace tr1;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define make_unique(vec) vec.resize(unique(all(vec)) - vec.begin())
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mem(a,b) memset(a,b,sizeof(a))
const int mx=1e5+123;
int gcd(int a,int b) {return __gcd(a,b);}
int lcd(int a,int b) {return a*(b/gcd(a,b));}
template <typename T> T nxt(){}
template <>int nxt(){int x;cin >> x;return x;}
template <>double nxt(){double x;cin >> x;return x;}
template <>string nxt(){string x;cin >> x;return x;}
int32_t main()
{
    fast();
    int t;cin>>t;
    while(t--)
    {
    }
}