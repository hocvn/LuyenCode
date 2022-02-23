#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 1e5 + 3;
int a[N],b[N];
int n,m;

int main(){

    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    int x = 0, y;
    for (int i = 1; i <= m; i++){
        scanf("%d",&y);
        int pos = lower_bound(a+1,a+n+1,y) - a;
        if (a[pos] == y) x += pos;
            else x--;
    }
    x %= 30;
    cout << (long long)pow(2,x);
    return 0;
}
