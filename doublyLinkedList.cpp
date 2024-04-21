#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node{
    Node *prev, *next;
    string name;

    Node(string name_ = "") : prev(NULL),next(NULL), name(name_){}
};
//Sentinel Nodeをグローバル領域においておきます
Node* nil;

void init(){
    nil = new Node();
    nil->prev = nil;
    nil->next = nil;
}

void printList(){
    Node* cur = nil->next;
    for(; cur!=nil; cur->next){
        cout << cur->name << "->";
    }
    cout << endl;
}
//Node p の直後にNode vを挿入する
void insert(Node* v, Node* p = nil){
    v->next = p->next;
    p->next->prev = v;
    p->next = v;
    v->prev = p;
    }
//Node vを削除する
void erase(Node*v){
    if(v == nil)return;
    v->prev->next = v->next;
    v->next->prev = v->prev;
    delete v;//メモリを解放
}
//双方向連結リストを初期化し，"watanabe"Nodeを削除したいとする
int main(){
    init();
    vector<string> names = {"yamamoto",
                            "watanabe",
                            "ito",
                            "takahashi",
                            "suzuki",
                            "sato"};
    Node* watanabe;
    for(int i = 0; i < (int)names.size(); ++i){
        Node* node = new Node(names[i]);
        insert(node);
        //watanabe Nodeを保持しておく
        if(names[i] == "watanabe") watanabe = node;
    }
    cout << "before: ";
    printList();
    erase(watanabe);
    cout << "after: ";
    printList();
    cout << endl;
}

