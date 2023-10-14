#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int field = 1;
    do{
        char mines[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mines[i][j];
            }
        }
        cout << "Field #" << field << ":" << endl;
        field++;
        int ans[n][m];
        memset(ans, 0, sizeof(ans));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mines[i][j]=='*'){
                    if(i!=0&&j!=0){
                        ans[i-1][j-1]++;
                    }
                    if(i!=0){
                        ans[i-1][j]++;
                    }
                    if(i!=0&&j!=m-1){
                        ans[i-1][j+1]++;
                    }
                    if(j!=m-1){
                        ans[i][j+1]++;
                    }
                    if(i!=n-1&&j!=m-1){
                        ans[i+1][j+1]++;
                    }
                    if(i!=n-1){
                        ans[i+1][j]++;
                    }
                    if(i!=n-1&&j!=0){
                        ans[i+1][j-1]++;
                    }
                    if(j!=0){
                        ans[i][j-1]++;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mines[i][j]!='*'){
                    cout << ans[i][j];
                }else{
                    cout << "*";
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> n >> m;
    }while(n!=0&&m!=0);
}