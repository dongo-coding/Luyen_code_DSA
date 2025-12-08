#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *pre;
};

struct dList{
    Node *head;
};

dList *createNode(int x){
    dList *l = new dList;
    l->head = new Node;
    l->head->data=x;
    l->head->pre=NULL;
    l->head->next=NULL;
    return l;
}

dList *addHead(dList *l, int x){
    Node *temp = new Node;
    temp->data=x;
    temp->pre=NULL;
    temp->next = l->head;
    l->head->pre=temp;
    l->head=temp;
    return l;

}

dList *addLast(dList *l, int x){
    Node *temp = new Node;
    temp->data=x;
    temp->next = NULL;

    Node *p = l->head;
    while (p->next !=NULL){
        p=p->next;

    }
    p->next=temp;
    temp->pre=p;

    return l;
}

void printList(dList *l){
    Node *p = l->head;
    while (p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main ()
{
    int n,x;
    cin>>n;
    dList *l = createNode(1);
    for(int i=2;i<=n;i++){
        l = addHead(l,i);
        l = addLast(l,i);
    }
    printList(l);
}



