#include<iostream>
#include<vector>
using namespace std;
using Graph = vector<vector<int>>;
//隣接リスト表現を使ってグラフを表現する
int graph(){
    int N, M; //the number of vertexes,edges
    cin >> N >> M;

    //Graph
    Graph G1(N);
    for(int i = 0; i < M; ++i){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        //for undirected graph
        //G[b].push_back(a);
    }
    }
//weighted-graph
struct Edge{
    int to;//adjacent-vertex number
    long long w;//weight
    Edge(int to, long long w): to(to),w(w){}
};
    using Graph2 = vector<vector<Edge>>;

int weighted_graph(){
    int N,M;
    cin >> N >> M;
    Graph2 G(N);
    for(int i = 0; i < M; ++i){
        int a, b;
        long long w;
        cin >> a >> b >> w;
        G[a].push_back(Edge(b,w));
    }
}
//ヒープの実装
struct Heap{
    vector<int>heap;
    Heap(){}
    //ヒープに値xを挿入
    void push(int x){
        heap.push_back(x);//最後尾に挿入
        int i = (int)heap.size()-1;//挿入された頂点番号
        while(i > 0){
            int p = (i - 1) / 2;//親の頂点番号
            if(heap[p] >= x)break;
            heap[i] = heap[p];//現在の値を親の値にする
            i = p;
        }
        heap[i] = x;
    }
    //最大値を知る
    int top(){
        if(!heap.empty())return heap[0];
        else return -1;
    }
    //最大値を削除
    void pop(){
        if(heap.empty())return;
        int x = heap.back();
        heap.pop_back();
        int i = 0;//根からおろしていく
        while(2 * i + 1 < (int)heap.size()){//ヒープのインデックスが存在しない子ノードを参照しないように、この条件でループが続けられるかを確認します。
        int child1 = i * 2 + 1, child2 = i * 2 + 2;
        if(child2 < (int)heap.size() && heap[child2] > heap[child1]){
            child1 = child2;
        }
        if(heap[child1] <= x)break;
        heap[i] = heap[child1];
        i = child1;
        }
        heap[i] = x;
    }
}