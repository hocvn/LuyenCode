#include <iostream>
#include <stack>
using namespace std;

int n,a[200005],l[200005],r[200005];

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++){
        if (a[i] > a[i-1]) l[i] = l[i-1] + 1;
            else l[i] = 1;
    }
    for (int i = n; i > 0; i--){
        if (a[i] > a[i+1]) r[i] = r[i+1] + 1;
            else r[i] = 1;
    }
    for (int i = 1; i <= n; i++)
        cout << l[i] + r[i] - 1 << " ";
    return 0;
}
