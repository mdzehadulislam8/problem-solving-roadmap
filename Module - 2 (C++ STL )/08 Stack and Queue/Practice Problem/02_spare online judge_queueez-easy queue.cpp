#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;

    queue<int> q;
    while(n--){
        int qType;
        cin >> qType;
        if(qType == 1){
            int x;
            cin >> x;
            q.push(x);
    }else if(qType == 2){
            if(!q.empty()){
                q.pop();
            }

    }else if(qTpe == 3){
            if(!q.empty()){
                cout << q.front() << endl;
            }else{
                cout << "Empty!" << endl;
            }
        }
    }
}
