//隣接リスト表現でグラフを実装してみる
#include <iostream>
#include <vector>
using namespace std;

//A[i]には、i番目のエッジの一方の頂点の番号が格納されています。
//B[i]には、i番目のエッジのもう一方の頂点の番号が格約されています。
int vertex, edge, A[100009], B[100009];
vector<int> G[100009];  // G[i] は頂点 i に隣接する頂点のリスト
int main(){
    //input
    cin >> vertex >> edge;
    for(int i = 1; i <= edge; i++){
        cin >> A[i] >> B[i]; 
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    //出力
    for(int i = 1; i <= vertex; i++){
        cout << i << ": {";
        for(int j= 0; j < G[i].size(); j++){
            if(j >= 1) cout << ",";
            cout << G[i][j];
        }
        cout << "}" << endl;
    }
}
//スタックで深さ優先探索を実装してみる
#include <stack>
bool visited[100009];
int DFS(){
 //スタックの初期化
    for(int i = 1; i <= vertex; i++){
        viisted[i] = false;
    }
    stack<int> dfsStack;
    visited[1] = true;
    dfsStack.push(1);
    while(!dfsStack.isempty()){
        int pos = dfsStack.top();
        dfsStack.pop();
        for(int nex : G[pos]){
            if(visited[nex] == false){
                visited[nex] == true;
                dfsStack.push(nex);
            }
        }
    }
}
int BFS(){
    #include <queue>
    int dist[100009];//頂点1から各頂点までの最短距離を格納。-1で未訪問と設定する
    for(int i = 1; i <= vertex; i++) dist[i] = -1;
    queue<int> BFSqueue;
    BFSqueue.push(1); dist[1] = 0;
    while (!Q.empty()) {
    int pos = Q.front();
    Q.pop();
    for (int i = 0; i < (int)G[pos].size(); i++) {
        int nex = G[pos][i];
        if (dist[nex] == -1) {
            dist[nex] = dist[pos] + 1;
            Q.push(nex);
        }
    }
} 
}