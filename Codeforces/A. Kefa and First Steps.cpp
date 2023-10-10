#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int money[n];
    for(int i=0; i<n; i++){
        cin >> money[i];
    }
    int ans = 1;
    int temp = 1;
    for(int i=1; i<n; i++){
        if(money[i]>=money[i-1]){
            temp++;
            ans = max(ans,temp);
        }else{
            temp = 1;
        }
        
    }
    cout << ans;
}