#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*

Q)  Suppose you are working as managrer in a Sports products Manufacturing Industry.
   Your task is to design a line which assembles two halves of Cricket balls.The halves entering the assembly line are either left half '{' or right half '}' or defective half 'd'.A right half can be rotated to make it a left half and vice versa.
    If the half is defective they'll be removed from assembly line and recycled later. If the left and right part match is found 
    these parts are joined and sent to packaging,otherwise the halves remain on the line
    until all have are loaded into assembly line.Note that no rotaions can happen on assembly line.
    When there are no  more matches left and all 
    halves are loaded into assembly line, 2 halves from assembly line are sent to rotation chamber, each at a time 
    to get a match. This process goes until all the havles remaining ont the assembly line are
    matched.Its is made sure that no halves remain unmatched by maintaining proper number of 
    halves in assembly line.You have been given the order of halves entering the assembly line.
    You have to return the number of pair of halves sent to rotation chamber ,number of balls produced,number of
    halves recycled.

Example 1:
    Input : 
    s = "d}}}}{{}}d}d}}d"
    N = 15

    OUTPUT : 
        number of rotations done = 3
        number of balls produed = 5
        number of halves recycled = 


Example 2:
    Input : 
    s = "d}}}{"
    N = 5

    OUTPUT : 
    number of rotations done = 3
    number of balls produed = 2
    number of halves recycled = 1

Code format:
    vector<int> findMinimumCost(string str,int n) {

    }


Constraints:
    1 <= T <= 100
    0 <= |STR| <= 10^5
    STR[i] = '{' or '}' or 'd'

*/


vector<int> findMinimumCost(string str,int n) {
    vector<int> answer;
    stack<char> s;
    int i=0;
    int c=0;
    int rec=0;

    while (i < n) {

        if(s.size()!=0 &&  (s.top() == '{' &&  str[i]=='}')){
            s.pop();
            c++;
        }
        else if(str[i]=='}' || str[i]=='{'){
            s.push(str[i]);
            c++;
        }
        else{
            rec++;
        }

        i++;
    }

    int rot_sum=s.size()/2;
    
    
    answer.push_back(rot_sum);
    answer.push_back(c/2);
    answer.push_back(rec);
    

    return answer;
}

int main()
{
    string s="{{{{{{{{{{{{{{{{{dddd}}}}}}}}}}}}}ddd{{{{{{{{{{{{{dddd}}}}}}}}}}}";
    int length = s.size();
    vector<int> n=findMinimumCost(s,length);
    cout<<endl;
    for(auto i:n){
      cout<<i<<endl;
    }
    return 0;
}