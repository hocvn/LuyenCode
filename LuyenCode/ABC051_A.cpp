#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ',') cout << ' ';
            else cout << s[i];
    }
    return 0;
}
