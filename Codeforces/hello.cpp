#include <bits/stdc++.h>

using namespace std;

int main(){
    int nums;
    cin >> nums;
    string word;
    for(int i=0; i<nums; i++){
        cin >> word;
        if(word.size() > 10){
            string ab;
            ab = word[0] + to_string(word.length()-2) + word.back();
            cout << ab << endl;
        }else{
            cout << word << endl;
        }
    }
}