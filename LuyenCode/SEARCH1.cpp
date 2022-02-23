#include <iostream>
#include <algorithm>
using namespace std;

int a[100005],b[100005];
int n,m;

int main(){

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        cout << binary_search(a,a+n,x);
    }
    return 0;
}
