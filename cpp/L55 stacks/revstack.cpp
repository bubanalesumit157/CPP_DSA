#include<iostream>
#include<stack>
using namespace std;
void p(stack<int> s){
    int size=s.size();
    for(int i=0;i<size;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void pushAtBottom(stack<int>& s,int x){
    if(s.size()==0){
        s.push(x);
        return;
    }
    int r=s.top();
    s.pop();
    pushAtBottom(s,x);
    s.push(r);
}
stack<int> pushAtBottom1(stack<int>& myStack, int x) 
{
    int size=myStack.size();
    int arr[size];
    int i=0;
    while(i<size){
        arr[i]=myStack.top();
        myStack.pop();
        i++;
    }
    myStack.push(x);
    i--;
    while(i>=0){
        myStack.push(arr[i]);
        i--;
    }
    return myStack;
    // Write your code here.
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()==1 || stack.size()==1){
		return;
	}
	int val=stack.top();
	stack.pop();
    reverseStack(stack);
    pushAtBottom(stack,val);
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(32);
    s.push(31);
    // cout<<s.size()<<endl;
    p(s);
    reverseStack(s);
    // stack<int> ss=pushAtBottom(s,9);
    cout<<"ans";
    p(s);
    return 0;
}