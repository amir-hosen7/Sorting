#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Mid(b, e) b + (e - b) / 2
#define inf 1e18
double PI = 2 * acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[] = {1, 2, 2, 1, -1, -2, -2, -1};

//8 direction
// ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

//4 direction
// ll dx[]={1, -1, 0, 0};
// ll dy[]={0, 0, 1, -1};

void yesNo(bool ck){cout << (ck ? "YES\n" : "NO\n");}
//------------------------------------------------------------------------------//

//ll toInt(string s){stringstream ss;ss<<s;int n;ss>>n;return n;}
//string toString(ll n){stringstream ss;ss<<n;string s;ss>>s;return s;}
//typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


const ll P = 29;
const ll N = 2e5 + 50;
const ll mod = 1e9 + 7;

void counting_sort(vector<int> &v, int n, int pos) {
    vector<int> curr(n), count(10, 0);
    for (int i = 0; i < n; i++) {
        int id = (v[i] / pos) % 10;
        count[id]++;
    }
    for (int i = 1; i <= 9; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int id = (v[i] / pos) % 10;
        curr[--count[id]] = v[i];
    }
    for (int i = 0; i < n; i++) {
        v[i] = curr[i];
    }
}

void radix_sort(vector<int> &v, int n) {
    int Max = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] > Max) {
            Max = v[i];
        }
    }
    for (int pos = 1; (Max / pos) > 0; pos *= 10) {
        counting_sort(v, n, pos);
    }
}

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t = 1;
    for (ll T = 1; T <= t; T++) {
        vector<int> v = {16, 300, 18, 405, 7, 5, 1, 0};
        radix_sort(v, v.size());
        for (auto i : v) cout << i << " ";
    }
    return 0;
}





