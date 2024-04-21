#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

struct Node{
    Node * next;
    string name;

    Node(string name_ = "") : next(NULL),name(name_){ }
};
//nillをグローバル領域に初期化しておく
Node* nil;

//連結リストを出力する
void printList(){
    Node* cur = nil->next;
    for(; cur!=nil; cur = cur->next){
        cout << cur->name << "->";
    }
    cout << endl;
}
//ノードpの直後にvを挿入する
void insert(Node* v, Node* p = nil){
    v->next = p->next;
    p->next = v;
}
int main(){
    //初期化
    init();
    vector<string>names = {"yamamoto",
                            "watanabe",
                            "ito",
                            "takahashi",
                            "suzuki",
                            "sato"};
    for(int i - 0; i < (int)names.size(); ++i){
        Node* node = new Node(names[i]);
        insert(node);
        cout << "step " << i << ":";
        printList();
    }
}
