#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    } 

    // ~Node(){
    //     int val= this->data;
    //     if(next!=NULL){
    //         delete next;
    //         next=NULL;
    //     }
    //     cout<<"memeory is free for data  "<<val<<endl;
    // } 
};

Node* mergeKLists(vector<Node*>& lists) {
        Node* n1=lists[0];
        
}
void print(Node* &head){
    Node* temp=head;
    cout<<endl<<"printing elements: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insert_at_head(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    
}

Node* reverse(Node* &head){
    Node* temp=NULL;
    Node* cur=head;
    Node* prev=NULL;
    cout<<endl;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
}

Node* reverseKGroup(Node* head, int k) {
    if(head==NULL){
        return head;
    }
    int i=1;
    Node* temp=head;
    while(i<k && temp!=NULL){
        i++;
        temp=temp->next;
    }
    if(i<k || temp==NULL){
        return head;
    }
    Node* send=temp->next;
    // Node* t=head;
    temp->next=NULL;
    Node* rev=reverse(head);
    head->next=reverseKGroup(send,k);
    return rev;
}

void print1(vector<Node*> head){
    Node* t= head[0];
    cout<<endl<<"printing elements: ";
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}

int main(){
    Node* head = new Node(9);
    insert_at_head(head,4);
    insert_at_head(head,3);
    insert_at_head(head,8);
    insert_at_head(head,5);
    print(head);
    // // Node* r=reverse(head);
    // Node* rev=reverseKGroup(head,2);
    vector<Node*> lists;
    lists.push_back(head);
    print1(lists);
}