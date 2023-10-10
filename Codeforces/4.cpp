#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> scores;
    for(int i=0; i<n; i++){
        int score;
        cin >> score;
        scores.push_back(score);
    }

    int best = scores[k-1];
    int contador = 0;
    for(int i=0; i<n; i++){
        if(scores[i]>=best&&scores[i]>0){
            contador++;
        }else{
            break;
        }
    }
    cout << contador;
}