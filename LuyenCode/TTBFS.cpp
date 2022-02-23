#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

bool dau[110];
pair <int,int> b[10001];
vector <int> a[110];
int n,m;

void BFS(int x){

    queue <int> q;
    q.push(x);
    cout << x << "\n";
    dau[x] = true;

    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : a[u]){
            if (!dau[v]){
                q.push(v);
                dau[v] = true;
                cout << v << "\n";
            }
        }
    }
}
int main(){

    scanf("%d%d",&n,&m);
    for (int i = 1; i <= m; i++)
        scanf("%d%d",&b[i].first,&b[i].second);
    sort(b+1,b+m+1);

    for (int i = 1; i <= m; i++){
        a[b[i].first].push_back(b[i].second);
        a[b[i].second].push_back(b[i].first);
    }
    for (int i = 1; i <= n; i++)
        if (!dau[i]) BFS(i);
    return 0;
}
