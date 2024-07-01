#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> findMinimumCost(string str) {
  vector<int> answer;
  stack<char> s;
  int i=0;
  int c=1;

  while((str[i]!='{' && str[i]!='}') ){
    i++;
  }

  s.push(str[i]);
  i++;

  while (i < str.length()) {
    // cout<<i<<" ";
    if(s.size()!=0 &&  (s.top() == '{' &&  str[i]=='}')){
      s.pop();
      c++;
    }
    else if(str[i]=='}' || str[i]=='{'){
      s.push(str[i]);
      c++;
    }
    i++;
  }


  int n=s.size();
  if(n%2==0){
    i=0;
    int sum=0;
    while (s.size()!=0) {
      char c1=s.top();
      s.pop();
      char c2=s.top();
      s.pop();
      if ((c2 == '}' && c1 == '{')) {
        sum = sum + 2;
      }
      else{
        sum=sum+1;
      }
    }
    answer.push_back(1);
    answer.push_back(sum);
    answer.push_back(c);
  }
  else{
    answer.push_back(0);
    answer.push_back(-1);
    answer.push_back(-1);
  }

  return answer;
}

int main()
{
    string s="}}}}}}{}JHGF}";
    vector<int> n=findMinimumCost(s);
    cout<<endl;
    for(auto i:n){
      cout<<i<<endl;
    }
    return 0;
}