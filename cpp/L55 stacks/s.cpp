#include<iostream>
#include<stack>
using namespace std;
void sortStack(stack<int> &stack)
{
	// Write your code here

    // cout<<3<<endl;
	if(stack.empty()!=0 || stack.size()==1){
        cout<<"yess"<<endl;
		return;
	}
	int fp;
	int val1=stack.top();
	stack.pop();
	int val2=stack.top();
	stack.pop();
    
    if(!stack.empty()){
        int val3;
        val3=stack.top();
        if(val2<val3){
            stack.pop();
            stack.push(val2);
            val2=val3;
        }
    }
	if(val2>val1){
		stack.push(val1);
		fp=val2;
	} 
	else {
			stack.push(val2);
			fp = val1;
	}
	sortStack(stack);
    
	int val = stack.top();
    cout<<val<<" "<<fp<<endl<<endl ;
	if (val > fp){
		stack.pop();
		stack.push(fp);
		stack.push(val);
	}
	else{
		stack.push(fp);
	}
    
}
int main()
{
    stack<int> s;
    s.push(30);
    s.push(-5);  //-3 14 18 -5 30

    s.push(18); 
    s.push(14);
    s.push(-3);
    cout<<s.top()<<endl;
    sortStack(s);
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    s.pop();
    return 0;
}