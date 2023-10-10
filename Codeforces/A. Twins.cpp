#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> coins;
    for(int i=0; i<n; i++){
        int coin; cin >> coin;
        coins.push_back(coin);
    }
    sort(coins.begin(),coins.end());
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += coins[i];
    }

    int ans = 0;
    int i=0;
    int minSum = 0;
    for(i=n-1; i>=0; i--){
        minSum += coins[i];
        ans++;
        if(minSum>sum-minSum){
            break;
        }
    }
    cout << ans;
}