#include <algorithm>
#include <vector>
using namespace std;

int n,m,a[100];
vector <int> sum;

void backtrack(int j,int s){

    for (int i = 0; i < 2; i++){
        if (i) s += a[j];
        if (j == n) sum.push_back(s);
            else backtrack(j+1,s);
    }
}
int main(){

    scanf("%d%d",&n,&m);
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }
    backtrack(1,0);
    int x;
    sort(sum.begin(),sum.end());
    while (m--){
        scanf("%d",&x);
        if (binary_search(sum.begin(),sum.end(),x)) cout << 1;
            else cout << 0;
    }
    return 0;
}
