#include <bits/stdc++.h>
#define ll              long long
#define yes             cout << "YES\n";
#define no              cout << "NO\n";
#define f1(n)           for(int i=0;i<n;i++)
#define f2(a,n)         for(int i=a;i<n;i++)
#define vi              vector <long long>
#define pb              push_back
#define sp              << " "
#define endl            "\n"
#define MOD             1000000007

using namespace std;

class Node{
    public:
        int value;
        Node *next=NULL;
    Node(int val){
        value=val;
    }
};

void insert_at_tail(Node *&root,int val){
    Node *newnode = new Node(val);
    if(root==NULL){
        root = newnode;
        return;
    }
    auto tmp = root;
    while(tmp->next!=NULL)
        tmp = tmp->next;

    tmp->next = newnode;
} 

int count(Node *&root){
    int count = 0;
    auto tmp = root;
    while(tmp!=NULL) {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void printMiddle(Node *&root){
    int size = count(root);
    auto tmp = root;
    int cnt = 0, tar = size/2;
    while(tmp!=NULL){
        if(cnt+1==tar){
            break;
        }
        tmp = tmp->next;
        cnt++;
    }
    if(size%2==0){
        cout <<tmp->value <<  " " << tmp->next->value;
    }
    else{
        cout <<tmp->next->value << endl;
    }
}
void solve(){
    Node *root = NULL;
    int v;
    while(1){
        cin >> v;
        if(v==-1) break;
        insert_at_tail(root,v);
    }
    printMiddle(root);
    
}   
signed main(){
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   
   //  int test;
   //  cin >> test;
   //  while (test--) 
            solve();
}