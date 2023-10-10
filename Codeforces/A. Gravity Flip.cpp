#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> boxes;
    for(int i=0; i<n; i++){
        int row; cin >> row;
        boxes.push_back(row);
    }
    sort(boxes.begin(),boxes.end());
    for(int i=0; i<n; i++){
        cout << boxes[i] << " ";
    }
}