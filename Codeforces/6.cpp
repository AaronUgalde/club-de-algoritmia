#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            char operation;
            cin >> operation;
            if(j==1){
                if(operation=='+'){
                    ans++;
                }else{
                    ans--;
                }
            }
        }
    }
    cout << ans;
}