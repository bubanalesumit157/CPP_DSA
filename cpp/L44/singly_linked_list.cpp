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

void insert_at_head(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    
}

void insert_after_head(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head->next;
    head->next = temp;
    
}

void insert_after_tail(Node* &head , int val){
    Node* temp = new Node(val);
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=temp;
    tail=temp;
}
void insert_at_tail(Node* &tail , int val){
    Node* temp = new Node(val);
    tail->next=temp;
    tail=temp;
}

void insert_before_tail(Node* &head , int val){
    Node* temp = new Node(val);
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* btail=head;
    while(btail->next!=tail){
        btail=btail->next;
    }
    btail->next=temp;
    temp->next=tail;
}

void insert_at_pos(Node* &head,Node* &tail,int n,int data){
    if(n==1){
        insert_at_head(head,data);
        return;
    }
    
    Node* temp=  new Node(data);
    Node* cur=head;
    int i=1;
    while(i<n-1){
        cur=cur->next;
        i++;
    }
    if(cur->next==NULL){
        insert_at_tail(tail,data);
        return;
    }
    temp->next=cur->next;
    cur->next=temp;

}

void insert_at_middle(Node* &head,int val){
    Node* temp = new Node(val);
    Node* c=head;
    int count=0;
    while(c!=NULL){
        count++;
        c=c->next;
    }
    // cout<<count<<endl;
    int mid=count/2;
    c=head;
    Node* prev;
    while(mid!=0){
        prev=c;
        c=c->next;
        mid--;
        // cout<<mid<<endl;
    }
    prev->next=temp;
    temp->next=c;
}


void print(Node* &head){
    Node* temp=head;
    cout<<"printing elements: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void traverse_list(Node* &head){
    if(head==NULL){
        printf("list empty\n");
        return;
    }

    Node* temp=head;

    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);  // last node
}

void deletenode(Node* &head,int val){
    Node* temp=head,*prev=NULL;
    while(temp->data!=val && temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }

    if(temp->next!=NULL){
        prev->next=temp->next;
        delete temp;
        return;
    }
    
    cout<<"not found"<<endl;
    
}

void delete_at_pos(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* cur=head;
    Node* prev=NULL;
    int i=1;
    while(i<pos){
        prev=cur;
        cur=cur->next;
        i++;
    }
    // Node* del=cur;
    prev->next=cur->next;
    cur->next=NULL;
    delete cur;

}

void revv(Node* &head,Node* &cur,Node* &prev){
    if(cur==NULL){
        head=prev;
        return;
    }
    Node* forward=cur->next;
    revv(head,forward,cur);
    cur->next=prev;

}
void rev_rec(Node* &head){
    Node* cur=head;
    Node* prev=NULL;
    revv(head,cur,prev);
}

Node* rev_rec_2(Node* head){
    if(head==NULL || head->next==NULL ){
        return head;
    }
    Node* chotahead = rev_rec_2(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
}


void mid_node(Node* &head){
    Node* n1=head;
    Node* n2=head;
    while(n1->next!=NULL && n1!=NULL){
        // cout<<1<<endl;
        n1=n1->next->next;
        n2=n2->next;
        // cout<<n2->data<<endl;
    }
    cout<<n1->data;
}

Node* mid_node_1(Node* &head){
    if(head==NULL || head->next==NULL){ 
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}


bool detectloop(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp=head;
    // cout<<visited[temp]<<endl;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floyd_cycle(Node* head){
    if(head==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(fast==slow){
            return slow;
        }

    }
    return NULL;
}
 
Node* getstart(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* interscn = floyd_cycle(head);
    Node* slow = head;
    while(slow!=interscn){
        slow=slow->next;
        interscn=interscn->next;
    }
    return slow;
}
void remove_loop(Node* head){
    if(head==NULL){
        return ;
    }
    Node* internode=getstart(head);
    // cout<<internode->data<<endl;
    Node* temp=internode;
    while(temp->next!=internode){
        temp=temp->next;
    }
    temp->next=NULL;
}



void removeDuplicates(Node * &head)
{
    cout<<endl;
    Node* temp=head;
    while(temp!=NULL){
        // cout<<endl<<1<<" ";
        Node* prev=temp;
        Node* cur=temp->next;
        while(cur->next!=NULL){
            if(temp->data==cur->data){
                Node* temp1=cur;
                prev->next=cur->next;
                prev=cur;
                cur = cur->next;
                delete temp1;
            }
            else{
                prev=cur;
                cur = cur->next;
            }
            
           cout<<2<<" ";
        }
        cout<<endl<<temp->data<<endl;
        temp=temp->next;
    }

    // return head;
    // Write your code here
}


void sort(Node* &head){
    // Node* z;
    // Node* prev=NULL;
    Node* temp=head;
    int arr[3]={0};

    while(temp!=NULL){
        if(temp->data==0){
            arr[0]++;
        }
        else if(temp->data==1){
            arr[1]++;
        }
        else{
            arr[2]++;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        while(arr[0]!=0){
            temp->data=0;
            temp=temp->next;
            arr[0]--;
        }
        while(arr[1]!=0){
            temp->data=1;
            temp=temp->next;
            arr[1]--;
        }
        while(arr[2]!=0){
            temp->data=2;
            temp=temp->next;
            arr[2]--;
        }
    }
}

void insert_tail(Node* &tail,Node* cur){
    tail->next=cur;
    tail=cur;
}
void sort1(Node* &head){
    Node* zh = new Node(-1);
    Node* oh = new Node(-1);
    Node* th = new Node(-1);
    Node* zt=zh;
    Node* ot=oh;
    Node* tt=th;
    Node* cur=head;
    while(cur!=NULL){
        // cout<<3;
        int val=cur->data;
        if(val==0){
            insert_tail(zt,cur);
        }
        else if(val==1){
            insert_tail(ot,cur);
        }
        else{
            insert_tail(tt,cur);
        }
        cur=cur->next;
    }
    cout<<endl<<tt->data<<endl;
    if(oh->next!=NULL){
        zt->next=oh->next;
    }
    else{
        zt->next=th->next;
    }

    ot->next=th->next;
    tt->next=NULL;
    head=zh->next;

    delete zh;
    delete oh;
    delete th;

    cur=head;
    while(cur!=NULL){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    // if(zh->next!=NULL){
    //     if(oh->next!=NULL){
    //         zt->next=oh->next;
            
    //         if(th->next!=NULL){
    //             ot->next=th->next;
                
    //         }
    //     }
    //     else if(th->next!=NULL){
    //         zt->next=th->next;
            
    //     }
    //     head=zt->next;
        
    // }

    // else if(oh->next!=NULL){
    //     if(th->next!=NULL){
    //         ot->next=th->next;
            
    //     }
    //     head=oh->next;
        
    // }

    // else{
    //     head=th->next;
        
    // }
    // delete zh;
    // delete oh;
    // delete th;
}

Node* merge_2_sorted_LL(Node* head1,Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    if(head1->data <= head2->data){
        Node* cur=head1;
        Node* prev=head1->next;
        Node* temp=head2;
        while(cur!=NULL && temp!=NULL){
            if(temp->data >= prev->data && temp->data <=cur->data){
                Node* insert= temp;
                temp=temp->next;
                prev->next=insert;
                insert->next=cur;
                prev=insert;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        while(temp!=NULL){
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
        return head1;
    }
    else{
        Node* cur=head2;
        Node* prev=head2->next;
        Node* temp=head1;
        while(cur!=NULL && temp!=NULL){
            if(temp->data >= prev->data && temp->data <=cur->data){
                Node* insert= temp;
                temp=temp->next;
                prev->next=insert;
                insert->next=cur;
                prev=insert;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        while(temp!=NULL){
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
        return head2;

    }
}

Node* insert(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;
    
}


bool isPalindrome(Node *head)
{
    Node* temp=head;
    int n=0;
    vector<int> arr;
    
    while(temp!=NULL){
        arr.push_back(temp->data);
        n++;
        temp=temp->next;
    }
    
    int i=0;
    while(i<n){
        if(arr[i]!=arr[n-1]){
            return 0;
        }
        i++;
        n--;
    }
    return 1;
    
    
}

bool isPalindrome(Node *head)
{
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
    }
    
    Node* temp=NULL;
    Node* prev=NULL;
    Node* cur=slow->next;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    slow->next=prev;
    
    temp=head;
    Node* temp1=slow->next;
    while(temp!=temp1){
        if(temp->data!=temp1->data){
            return 0;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return 1;
    
}



int main()
{
    Node* node1 = new Node(7);
    Node* node2 = new Node(9);
    Node* head1 = insert(node1,7);
    head1 = insert(node1,5);
    head1 = insert(node1,3);
    Node* head2 = insert(node2,8);
    head2 = insert(node2,7);
    head2 = insert(node2,5);
    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;
    Node* head= merge_2_sorted_LL(head1,head2);
    print (head);

    // insert_at_head(head,0);
    // insert_at_head(head,1);
    // insert_at_head(head,1);
    // insert_at_head(head,2);
    // insert_at_head(head,0);
    // insert_at_head(head,2);
    // insert_after_head(head,59);
    // insert_after_head(head,53);
    // insert_after_tail(head,57);
    // insert_after_tail(head,33);
    // insert_before_tail(head,73);
    // insert_before_tail(head,73);
    // insert_at_middle(head,93);
    // print(head);
    // cout<<endl;
    // insert_at_middle(head,94);
    // insert_at_tail(tail,3);
    // // insert_at_tail(tail,35);
    // insert_at_middle(head,4);
    // cout<<head->data<<endl;
    // print(head);
    // sort1(head);
    // print(head);
    // removeDuplicates(head);traverse_list(head);
    // print(head);
    // cout<<endl;
    // tail->next=head->next->next;
    // cout<<endl<<tail->next->data<<" "<<head->next->next->data<<endl;
    // cout<<endl<<detectloop(head)<<endl;
    // Node* loop=floyd_cycle(head);
    // cout<<loop->data<<endl;
    // Node* interscn=getstart(head);
    // cout<<"intr"<<interscn->data<<endl;
    // remove_loop(head);
    // cout<<detectloop(head);
    // rev_rec(head);
    // head=rev_rec_2(head);
    // print(head);
    // cout<<endl;
    // Node* midd=mid_node_1(head);
    // cout<<endl<<midd->data;
    // insert_at_pos(head,tail,7,856);
    // insert_at_tail(tail,33);
    // delete_at_pos(head,tail,1);
    // // deletenode(head,93);
    // print(head);
    // cout<<node1->data<<" "<<node1->next;
    return 0;
}