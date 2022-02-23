#include <iostream>
#include <algorithm>
using namespace std;

int a[2005];
int n,k;

int main(){

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n,greater<int>());
    int i = 0, res = 0;
    while (i + k < n){
        res += (a[i]-1)*2;
        i += k;
    }
    cout << res + (a[i]-1)*2;
    return 0;
}
