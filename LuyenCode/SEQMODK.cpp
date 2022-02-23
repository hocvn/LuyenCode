#include <iostream>
#define ll long long
using namespace std;

int n,k;
int a[1001];
int du[2][100];

int modk(int x){

    if (x >= 0) return x % k;
    return x + ((-x / k + 1) * k);
}
int main(){

    scanf("%d%d",&n,&k);
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
        a[i] = modk(a[i]);
    }
    int x = 0, y = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 100; j++){
            int t = (j + a[i]) % k;
            if (du[x][j] == 0 && j != 0){
                du[y][t] = max(du[y][t],du[x][t]);
                continue;
            }
            du[y][t] = max(du[y][t],du[x][j] + 1);
        }
        x = 1-x;
        y = 1-y;
    }
    cout << du[x][0];
    return 0;
}
