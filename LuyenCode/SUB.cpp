#include <iostream>
using namespace std;

int main(){

    int t,a,b,x,s,n;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        a = b = -1e9;
        s = 0;
        for (int i = 1; i <= n; i++){
            scanf("%d",&x);
            if (x > 0){
                (a < 0) ? a = x : a += x;
            }
            s += x;
            b = max(b,s);
            if (s < 0) s = 0;
        }
        if (b <= 0) a = b;
        cout << a << ' ' << b << "\n";
    }
    return 0;
}
