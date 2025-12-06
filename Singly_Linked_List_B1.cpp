#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};

node *createNode(int x){
    node *temp = new node;
    temp->next=NULL;
    temp->data=x;
    return temp;
}

void printList(node *l){
    node *p = l;
    while (p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

node *addNode(node *p, int x){
    node *temp = createNode(x);
    p->next = temp;
    return temp;
}

int main (){
    int n,x;
    cin>>n>>x;
    node *l = createNode(x);
    node *p = l;
    for(int i=1;i<n;i++){
        cin>>x;
        p=addNode(p,x);
    }
    printList(l);
}

