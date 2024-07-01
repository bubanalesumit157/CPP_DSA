#include<iostream>
#include<vector>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;

    // ListNode(int val){
    //     this->val=val;
    //     next=NULL;
    // } 
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* solve(ListNode* l1,ListNode* l2){
    ListNode* n=l1;
    ListNode* n1=l1->next;
    ListNode* n2=l2;
    while(n1!=NULL && n2!=NULL){
        if(n2->val >= n->val && n2->val <= n1->val){
            n->next=n2;
            ListNode* temp=n2->next;
            n2->next=n1;
            n=n->next;
            n2=temp;
        }
        else{
            n=n->next;
            n1=n1->next;
        }
    }
    if(n2!=NULL){
        n->next=n2;
    }
    return l1;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    if(list1->val <= list2->val){
        return solve(list1,list2);
    }
    return solve(list2,list1);
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size()==0){
        return NULL;
    }
    ListNode* ans;
    int i=1;
    while(i<lists.size()){
        ans = mergeTwoLists(lists[0],lists[i]);
        i++;
    }

    return ans;
}

void print1(vector<ListNode*> head){
    int i=0;
    while(i<head.size()){ 
        ListNode* t= head[i];
        cout<<endl<<"printing elements: ";
        while(t!=NULL){
            cout<<t->val<<" ";
            t = t->next;
        }
        i++;
    }
}

void print(ListNode* &head){
    ListNode* temp=head;
    cout<<endl<<"printing elements: ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

void insert_at_head(ListNode* &head,int val){
    ListNode* temp = new ListNode(val);
    temp->next = head;
    head = temp;
    
}

int main(){
    ListNode* head = new ListNode(1);
    insert_at_head(head,2);
    insert_at_head(head,3);
    insert_at_head(head,4);
    insert_at_head(head,5);

    ListNode* head1 = new ListNode(6);
    insert_at_head(head1,7);
    insert_at_head(head1,8);
    insert_at_head(head1,9);
    vector<ListNode*> lists;
    lists.push_back(head);
    lists.push_back(head1);
    print1(lists);
    ListNode* sorted=mergeKLists(lists);
    print(sorted);
}