#include <bits/stdc++.h>
using namespace std;
int main() {
    int iwhit1;
    int jwhitj;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int number;
            cin >> number;
            if(number==1){
                iwhit1 = i;
                jwhitj = j;
                break;
            }
        }
    }
    int ans = abs(iwhit1-2) + abs(jwhitj-2);
    cout << ans;
}