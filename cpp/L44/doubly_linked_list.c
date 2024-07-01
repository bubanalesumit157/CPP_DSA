#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}node;

int data=10;
node* start = NULL;

node* getnode(){
    node* temp = (node*)malloc(sizeof(node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    data+=10;
    return temp;
}

void traverse_list(){
    if(start==NULL){
        printf("list empty\n");
        return;
    }
    node* temp=start;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->right;
    }
    printf("\n");
}

void add_at_start(){
    node* temp=getnode();
    if ((start==NULL)){
        start=temp;
        start->left=NULL;
        start->right=NULL;
        return;

    }
    temp->right=start;
    start->left=temp;
    temp->left=NULL;
    start=temp;
}

void add_at_end(){
    node* tail=start; 
    while(tail->right!=NULL){
        tail=tail->right;
    }  
    node* nn=getnode();
    nn->right=NULL;
    nn->left=tail;
    tail->right=nn;
}

void add_before_key(int key){
    node* temp=getnode();
    node* keynode=start;
    node* prev=start;
    while(keynode->data!=key && keynode!=NULL){
        prev=keynode;
        keynode=keynode->right;
    }
    if(keynode==NULL){
        printf("key not found\n");
        return;
    }
    temp->right=keynode;
    temp->left=prev;
    keynode->left=temp;
    prev->right=temp;
}

void add_after(int key){
    node* temp=start;
    while(temp->right!=NULL){
        if(temp->data==key){
            node* nn=getnode();
            nn->right=temp->right->right;  
            nn->left=temp;
            temp->right=nn;
            return;
        }
        temp=temp->right;
    }
    printf("key not dfound\n\n");
}

void delete_at_start(){
    if(start==NULL){
        printf("list empty\n");
        return;
    }
    node* temp=start;
    start=start->next;
    free(temp);
}

void delete_at_end(){
    if(start==NULL){
        printf("list empty\n");
        return;
    }
    node* temp=start;
    node* prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);

}

void delete_node_1(int key){
    node* cur=start;
    node* prev=NULL;
    while(cur->data==key && cur->right!=NULL){
        prev=cur;
        cur=cur->next;
    }
    if(cur->next==NULL){
        printf("key not found\n");
        return;
    }
    prev->next=cur->next;
    free(cur);
}

void delete_node(int key){
    node* prev=NULL;
    node* cur=start;
    while(cur!=NULL){
        if(cur->data==key){
            prev->next=cur->next;
            free(cur);
        }
        prev=cur;
        cur=cur->next;
    }
}

int main(){
    add_at_start();
    add_at_start();
    add_at_start();
    add_at_end();
    add_at_end();
    add_at_end();
    // add_at_start();
    traverse_list();
    delete_at_start(); 
    delete_at_end();   
    traverse_list();    

}