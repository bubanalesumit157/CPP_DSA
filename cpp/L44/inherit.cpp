#include<iostream>
using namespace std;
class s{
    public:
    int d;
    void p(){
        cout<<1<<endl;
    }
};

class s1{
    public:
    void p(){
        cout<<2;
    }
};

class s2:public s,public s1{

};
int main()
{
    s2 c;
    // cout<<c.d;
    c.s1::p();
    return 0;
}