#include <iostream>
#include <vector>
using namespace std;

long long n;
int cnt[50];
vector <int> luu;
int main(){

    cin >> n;
    int i = 2;
    while (n != 1){
        if (n % i == 0){
            while (n % i == 0){ cnt[luu.size()]++;  n /= i; }
            luu.push_back(i);
        }
        else{
            if (i > 1e6){
                cnt[luu.size()]++;
                luu.push_back(n);
                break;
            }
            i++;
        }
    }
    cout << luu.size() << "\n";
    for (int i = 0; i < (int)luu.size(); i++)
        cout << luu[i] << " " << cnt[i] << "\n";
    return 0;
}
