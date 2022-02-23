#include <iostream>
#define ll long long
using namespace std;

const int N = 1e5 + 3;
ll a[N],b[N];
int n,q;

void enter(){

    scanf("%d%d",&n,&q);
    for (int i = 1; i <= n; i++){
        scanf("%lld",&a[i]);
        b[i] = b[i-1];
        if (a[i] < 0) b[i] += a[i];
        a[i] += a[i-1];
    }
}
int main(){

    enter();
    int x,y;
    while (q--){
        scanf("%d%d",&x,&y);
        cout << a[y] - a[x-1] - (b[y] - b[x-1]) << "\n";
    }
    return 0;
}
