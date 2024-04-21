#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
//コイン問題を貪欲法で解いてみる
const vector<int> coinkinds = {500, 100, 50, 10, 5, 1};
int main(){
    int price;
    vector<int> coinvalues(6);
    cin >> price;
    for(int i = 0; i < 6; i++){
        cin >> coinvalues[i]
    }
    int result =  0;
    for(int i = 0; i < 6; i++){
        int usingCoinValues = x / coinkinds[i]
        if(usingCoinValues > coinvalues[i]) usingCoinValues = coinvalues[i];
        price -= coinkinds[i] * usingCoinValues;

        result += usingCoinValues;
    }
    cout << result << endl;
}

