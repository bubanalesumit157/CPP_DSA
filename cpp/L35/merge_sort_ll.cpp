#include<iostream>
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
};
void insert_at_head(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    
}


void merge_sort(int arr[],int s,int e){
    int mid=(s+e)/2;
    if(s>=e){
        return;
    }
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    // merge_arr(arr,s,e);
}

void mergesort1(Node* &head){
    map<int,bool> visited;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        int d=temp->data;
        if(visited[d]==true){
            prev->next=temp->next;
            Node* todelete=temp;
            temp=temp->next;
            todelete->next=NULL;
            delete todelete;
        }
        else{
            visited[d]=true;
            prev=temp;
            temp=temp->next;
        }
    }
}
void print(Node* &head){
    Node* temp=head;
    cout<<"printing elements: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void mid_node(Node* &head){
    Node* n1=head->next;
    Node* n2=head;
    cout<<endl;
    while(n1->next!=NULL && n2!=NULL){
        // cout<<1<<endl;
        n1=n1->next;
        if(n1->next!=NULL){
            n1=n1->next;
        }
        n2=n2->next;
        // cout<<n2->data<<endl;
    }
    cout<<n2->data;
}

int main()
{
    Node* head = new Node(2);
    insert_at_head(head,53);
    insert_at_head(head,33);
    insert_at_head(head,33);
    insert_at_head(head,33);
    insert_at_head(head,53);
    insert_at_head(head,53);
    insert_at_head(head,56);
    insert_at_head(head,56);
    insert_at_head(head,56);
    print(head);
    cout<<endl;
    mergesort1(head);
    print(head);
    // mid_node(head);
    return 0;
}