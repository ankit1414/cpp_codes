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
    int m; cin >> m;
    int q[m];
    int mn = INT_MAX;
    for(int i = 0; i < m; i++) {
        cin >> q[i];
        mn = min(mn, q[i]);
    }
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i = n-1; i >= 0; i--) {
        if(i < mn) {
            ans += arr[i];
            continue;
        }
        for(int j = 0; j < mn; j++) {
            ans += arr[i-j];
        }
        i -= mn;
        i -= 1;
    }
    // cout << mn << " ";
    std::cout << ans << endl;



    return 0;
}