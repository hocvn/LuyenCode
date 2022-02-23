#include <iostream>
#include <algorithm>
using namespace std;

pair <int,int> a[100005];
int n,m;

int search_(int x){

    int d = 1, c = n;
    while (d < c){
        int mid = (d + c) >> 1;
        if (a[mid].first < x) d = mid+1;
            else c = mid;
    }
    return d;
}
int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a+1,a+n+1);
    int x;
    for (int i = 0; i < m; i++){
        cin >> x;
        int pos = search_(x);
        if (a[pos].first == x) cout << a[pos].second << " ";
            else cout << 0 << " ";
    }
    return 0;
}
