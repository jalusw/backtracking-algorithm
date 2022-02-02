#include <bits/stdc++.h>
using namespace std;

void  backtracking(int n,  int arr[], int depth){
    if(depth < n){
        for(int i = 0;i <= 1;i++){
            arr[depth] = i;
            backtracking(n,arr,depth+1);
        }
    }else{
        for(int i = 0 ;i < n;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n = 3;
    int arr[n] = {0};

    backtracking(n,arr,0);
    return 0;
}
