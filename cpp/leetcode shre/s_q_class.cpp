#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(s.size()==1){
            int p=s.top();
            s.pop();
            return p;
        }
        int t=s.top();
        s.pop();
        int ans=pop();
        s.push(t);
        p(s);
        return ans;
    }
    
    int peek() {
        if(s.size()==1){
            // int p=s.top();
            // s.pop();
            return s.top();
        }
        int t=s.top();
        s.pop();
        int ans=pop();
        s.push(t);
        return ans;
    }
    
    bool empty() {
        if(s.size()==0){
            return 1;
        }
        return 0;
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
void p(stack<int> s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    } 
    cout<<endl;
}
int main()
{
    MyQueue* obj = new MyQueue();
    obj->push(7);
    obj->push(8);
    obj->push(9);
    int param_2 = obj->pop();
    int param_3 = obj->peek();
    bool param_4 = obj->empty();
    cout<<param_2<<" "<<param_3<<" "<<param_4;
    return 0;
}