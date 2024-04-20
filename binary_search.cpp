//基本的な二分探索の形
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 20000000;
bool P(int x){
    //述語関数
}

int binary_search(){
    int left, right;

    while(right - left > 1){
        int mid = left + (right - left) / 2;
        if(P(mid)) right = mid;
        else left = mid;
    }
    return right;
}
//年齢あてゲーム
int main(){
    cout << "start game!" << endl;
    int left = 20, right = 36;
    while(right  - left > 1){
        int mid = left + (right - left) / 2;
        // mid 以上かを聞いて、回答を yes/no で受け取る
        cout << "Is the age less than " << mid << "?(yes / no)" << endl;
        string ans;
        cin >> ans;
        if(ans == "true") right = mid;
        else left = mid;
    }
    cout << "answer is " << left << "!" << endl;
}
//全探索のペア最小和問題を二分探索で高速化

int minimum_pair_addition(){
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; ++i) cin >> a[i];
    for (int i = 0; i < N; ++i) cin >> b[i];

    int min_value = INF;
    sort(b.begin(),b.end());

    
}
//射撃王問題
int main(){
    long long M = 0;
    //二分探索の上限値を求める
    for(int i = 0; i < N; i++){
        M = max( M , H[i] + S[i] * N);
    }
    long long left = 0, right = M;
    while(right - left > 1){
        long long mid = ( right + left ) / 2;

        bool ok = true;
        vector<long long> t(N,0);
        for(int i = 0; i < N; ++i){
            if(mid < H[i])ok = false;
            else t[i] = (mid-H[i]) / S[i]
        }
        sort(t.begin(),t.end());
        for(int i = 0; i < N; i++){
            
        }
    }
}