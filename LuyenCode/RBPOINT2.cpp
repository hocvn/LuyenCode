#include <iostream>
#include <algorithm>
using namespace std;

long long a[100005],b[100005];
int n;

int main(){

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    long long res = 1e9;
    for (int i = 0; i < n; i++){
        int pos = lower_bound(a,a+n,b[i]) - a;
        res = min(res,abs(b[i] - a[pos]));
    }
    for (int i = 0; i < n; i++){
        int pos = lower_bound(b,b+n,a[i]) - b;
        res = min(res,abs(a[i] - b[pos]));
    }
    cout << res;
    return 0;
}
