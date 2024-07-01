#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* arb;

    Node(int data){
        this->data=data;
        next=NULL;
        arb=NULL;
    } 
};

Node *copyList(Node *head)
{
    //Write your code here
    Node* temp=head->next;
    int n=1;
    Node* newhead = new Node(head->data);
    Node* newtail=newhead;
    while(temp!=NULL){
        Node* newnode = new Node(temp->data);
        newtail->next=newnode;
        newtail=newnode;
        temp=temp->next;
        n++;
    }
    
    Node* cur=head;
    Node* newcur=newhead;
    
    while(cur!=NULL){
        Node* temp=head;
        Node* newtemp=newhead;
        int j=0,i=0;
        while(temp!=NULL && cur->arb!=temp){
            j++;
            temp=temp->next;
        }
        if(j>=n){
            newcur->arb=NULL;
        }
        else{
            while(newtemp!=NULL && i<j){
                newtemp=newtemp->next;
                i++;
            }
            newcur->arb=newtemp;
        }
        newcur=newcur->next;
        cur=cur->next;

    }
    return newhead;
}
void insert(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    
}

void p(Node* head){
    Node* h=head;
    while(h!=NULL){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<endl;
}

Node *copyList(Node *head)
{
    //Write your code here
    Node* temp=head->next;
    int n=1;
    Node* newhead = new Node(head->data);
    Node* newtail=newhead;
    while(temp!=NULL){
        Node* newnode = new Node(temp->data);
        newtail->next=newnode;
        newtail=newnode;
        temp=temp->next;
        n++;
    }
    
    Node* cur=head;
    Node* newcur=newhead;
    unordered_map<Node*,Node*> oldtonew;
    while(cur!=NULL && newcur!=NULL){
        oldtonew[cur]=newcur;
        newcur=newcur->next;
        cur=cur->next;
    }
    cur=head;
    newcur=newhead;
    while(cur!=NULL && newcur!=NULL){
        newcur->arb=oldtonew[cur->arb];
        newcur=newcur->next;
        cur=cur->next;
    }
    return newhead;
}

void n(){
    cout<<endl;
}
int main()
{
    Node* head = new Node(3);
    insert(head,2);
    insert(head,21);
    insert(head,25);
    insert(head,22);
    head->arb=head->next;
    head->next->arb=head->next->next;
    p(head);
    Node* nhead=copyList(head);
    n();
    p(nhead);
    cout<<nhead->data;
    
    cout<<head->next->arb->data<<endl;
    
    return 0;
}