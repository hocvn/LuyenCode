#include <iostream>
#include <cstring>
using namespace std;

string s[] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
string st;

int main(){

    cin >> st;
    int n = st.length();

    for (int t = 0; t <= 9; t++){
        int j = 0;
        for (int i = 0; i < n; i++){
            if (s[t][j] == st[i]) j++;
            if (j == s[t].length()){
                cout << s[t];
                return 0;
            }
        }
    }
    cout << "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!";
    return 0;
}
