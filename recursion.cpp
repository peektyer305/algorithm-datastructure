#include<iostream>
#include<vector> 
using namespace std;

//ユークリッドの互除法
int GCD(int m, int n){
    if(n == 0) return m;

    return GCD( n, m % n );
}
//フィボナッチ数列
int fibo(int n){
    if(N == 0)return 0;
    if(N == 1)return 1;

    return fibo(n-2)+fibo(n-1);
}
//別解
int fibo2(int n){
    vector<long long >F(50);
    F[0] = 0, F[1] = 1;
    for(int N = 2; N < 50; N++){
        F[N] = F[N-1] + F[N-2];
    }
}
//フィボナッチ数列を求める関数をメモ化して計算効率を上げる
    vector<long long >memo;

    long long memo3(int N){
        if(N == 0) return 0;
        else if(N == 1) return 1;

        if(memo[N] != -1)return memo[N];

        return memo[N] = memo3[N-1] + memo3[N-2];
    }
//部分和問題を再帰関数を利用した全探索でとく
bool func(int i, int w, const vector<int> &a){
    if(i == 0){
        if(w == 0)return true;
        else return false;
    }
    if(memo[])
//a[i-1]を選ばない場合
if(func( i-1, w, a))return true;
//a[i-1]を選ぶ場合
if(func( i - 1, w - a[i - 1],a))return true;

return false;
}
//755
void func(long long N, long long cur, int use, long long &counter){
    if(cur > N)return;
    if(use == 0b111 ) counter++;

    func(N, cur * 10 + 7, use | 0b001,counter);
    func(N, cur * 10 + 5, use | 0b010,counter);
    func(N, cur * 10 + 3, use | 0b100,counter);

}
int 753(){
    long long N;
    cin >> N;
    long long counter = 0;
    func(n,0,0,counter);
    cout << counter << endl;
}
//カエルジャンプ
vector<long long> dp(N,INF);
dp[0] = 0;
for(int i = 1; i < N; i++){
    if(i == 1) dp[i] = abs(h[i] - h[i-1]);
    else dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i]-h[i-2]));
}
 