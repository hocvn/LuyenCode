#include <iostream>
using namespace std;

int main(){

    int n,x,y;
    scanf("%d%d",&n,&y);
    while (n--){
        scanf("%d",&x);
        if (x == y){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
