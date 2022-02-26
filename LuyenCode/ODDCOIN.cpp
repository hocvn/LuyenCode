#include <iostream>
using namespace std;

long long t,x;
int a[] = {1,3,5,10,30,50,100,300,500,1000,3000,5000,10000,30000,50000};

int cal(long long y){

    int j = 14, cnt = 0;
    while (y){
        while (j && y < a[j]) j--;
        y -= a[j];
        cnt++;
    }
    return cnt;
}
void solve(){

    int ans = 1e9;
    for (int i = 0; i <= t/x; i++){
        ans = min(ans,i + cal(t-i*x));
    }
    cout << ans << '\n';
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        cin >> x >> t;
        solve();
    }
    return 0;
}
