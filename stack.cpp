#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

//逆ポーランド記法の数式を解くアルゴリズム

double calc(const string &exp) {
    stack<double> st;
    for (auto c : exp) {
        if (c >= '0' && c <= '9') { // 文字が数字なら
            double add = c - '0'; // 文字を数値に変換
            st.push(add); // スタックにプッシュ
        } else { // 演算子の場合
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            if (c == '+') st.push(b + a); // 加算
            else if (c == '-') st.push(b - a); // 減算
            else if (c == '*') st.push(b * a); // 乗算
            else if (c == '/') st.push(b / a); // 除算
        }
    }
    return st.top(); // スタックの一番上の値を返す
}
//()の整合性を確かめるアルゴリズム
bool check(const string &S){
    stack<int>st2;
    vector<pair<int,int> > ps;

    for(int i = 0; i < (int)S.size(); ++i){
        if(S[i] == "(")st2.push(i);
        else{
            if(st2.empty()){
                cout << "error" << endl;
                return false;
            }
            int t = st2.top;
            st2.pop();
            ps.push_back({t,i});
        }
    }
    if(!st2.empty()){
        cout << "Too many" << endl;
        return false;
    }
    //整合するペアを出力
    sort(ps.begin(), ps.end())
    for(int i = 0; i < (int)ps.size(); ++i){
        if(i) cout << "," ;
        cout << "(" << ps[i].first << ")" << ps[i].second;
    }
    cout << endl;
    return true;
}