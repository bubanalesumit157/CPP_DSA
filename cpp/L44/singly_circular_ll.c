#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}node;

int data=10;
node* start = NULL;

node* getnode(){
    node* temp = (node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    data+=10;
    return temp;
}

void traverse_list(){
    if(start==NULL){
        printf("list empty\n");
        return;
    }

    node* temp=start;

    while(temp->next!=start){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);  // last node
}


void add_begin(){
    node* newnode=getnode();
    node* temp=NULL;
    if(start==NULL){
        start=newnode;
        newnode->next=start;
    }
    else{
        temp=start;
        while(temp->next!=start){
            temp=temp->next;
        }
         
        newnode->next=start;
        temp->next=newnode;   //last node pints to start
        start=newnode;
    }
}

void add_end(){
    node* newnode=getnode();
    node* temp=NULL;
    if(start==NULL){
        printf("list empty\n");
        return;
    }
    else{
        temp=start;
        while(temp->next!=start){
            temp=temp->next;        //navigate to last node
        }
        temp->next=newnode;
        newnode->next=start;
    }
}

// void add_at_node(int val){
//     node* newnode=getnode();
//     node* temp=start;
//     while(temp->next!=start){
//         if(temp->data==val){
            
//         }
//     }

// }

void delete_start(){
    if(start==NULL){
        printf("list emoty\n");
        return;
    }
    node* temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    node* d=start;
    temp->next=start->next;
    start=start->next;
    free(d);
}

void delete_end(){
    
    if(start==NULL){
        printf("list emoty\n");
        return;
    }
    node* temp=start;
    node* prev=NULL;
    while(temp->next!=start){
        prev=temp;
        temp=temp->next;
    }
    prev->next=start;
    free(temp);
}



int main(){
    add_begin();
    add_begin();
    add_begin();
    add_end();
    add_end();
    add_end();
    
    traverse_list();
    delete_end();
    traverse_list();
    delete_start();
    traverse_list();
}