#include <iostream>
#include <cstring>
using namespace std;

int num[10] = {6,2,5,5,4,5,6,3,7,6};
string b[45];
int t,n;

string max_(string x,string y,int j){

    y += (char)(j+48);
    if (x > y) return x;
    return y;
}
string min_(string x,string y,int j){

    y += (char)(j+48);
    if (x < y) return x;
    return y;
}
int main(){

    cin >> t;
    bool k;
    for (int i = 1; i <= 40; i++){
        k = true;
        for (int j = 0; j < 10; j++){
            int tmp = i - num[j];
            if (tmp < 0 || (b[tmp] == "" && tmp)) continue;

            if (k && (b[tmp] != "" || j != 0)){
                b[i] = b[tmp] + (char)(j+48);
                k = false;
                continue;
            }
            if (b[i].length() > b[tmp].length()+1) b[i] = b[tmp] + (char)(j+48);
                else if (b[i].length() == b[tmp].length()+1) b[i] = min_(b[i],b[tmp],j);
        }
    }
    while (t--){
        cin >> n;
        cout << b[n] << " ";
        if (n & 1) { cout << "7"; n -= 3; }
        for (int i = 1; i <= n/2; i++) cout << "1";
        cout << "\n";
    }
    return 0;
}
