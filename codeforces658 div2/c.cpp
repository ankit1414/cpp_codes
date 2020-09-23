#include <bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set 
#define mod 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        umap<int,int> mp;
        for(int i = 0; i < n; i++) {
            int num; cin >> num;
            mp[num]++;
        }
        int ans = -1;
        for(int i = 0; i < m; i++) {
            int num; cin >> num;
            if(mp.count(num) > 0) {
                ans = num;
            }
        }
        if(ans == -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES " << endl << "1 " <<  ans << endl;
        }
    }
    return 0;
}