#include <iostream>
#include <algorithm>
using namespace std;

pair <int, long long> a[100005];
long long k,s;
int n;

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].first >> a[i].second;
    cin >> k;
    sort(a+1,a+n+1);
    s = 0;
    int i = 1;
    while (s < k){
        s += a[i++].second;
    }
    cout << a[i-1].first;
    return 0;
}
