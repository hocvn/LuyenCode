#include <iostream>
#include <algorithm>
using namespace std;

int a[100005];
int n,m;

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        int pos = lower_bound(a+1,a+n+1,x) - a;
        if (a[pos] == x) cout << pos << " ";
            else cout << 0 << " ";
    }
    return 0;
}
