#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char s[6000];
    scanf("%s", s+1);
    int n = strlen(s+1),m;
    scanf("%d",&m);

    int l,r;
    bool check;
    while (m--){
        check = true;
        scanf("%d%d",&l,&r);
        for (int i = l; i <= (l+r)/2; i++){
            if (s[i] != s[r-(i-l)]){
                check = false;
                break;
            }
        }
        (check) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
