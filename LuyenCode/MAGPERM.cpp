#include <iostream>
using namespace std;

const int N = 1e5 + 3;
int a[N],luu[N],n,k;
bool d[N];

int main(){

    scanf("%d%d",&n,&k);
    bool check = true;
    
    for (int i = 1; i <= n; i++){
        if (i-k < 1 && i+k > n) check = false;
        if (!check) break;
        if (i-k > 0){
            if (d[i-k]){
                if (i+k > n) check = false;
                    else { luu[i] = i+k; d[i+k] = true; }
            }
            else { luu[i] = i-k; d[i-k] = true; }
        }
        else { luu[i] = i+k; d[i+k] = true; }
    }
    if (!check) cout << -1;
        else for (int i = 1; i <= n; i++) cout << luu[i] << " ";
    return 0;
}
