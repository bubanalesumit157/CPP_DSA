#include<iostream>
using namespace std;


class P{
    public:
    int a;
    int b;
    
    void fun(){
        cout<<"d1\n"<<endl;
    }
    void fun(int d){
        cout<<"d12"<<endl;
    }
    int fun(int d,int f){
        cout<<"d22"<<endl;
    }


    int  operator+ (P &obj){
        int val1=this->a;
        int val2= obj.a;
        cout<<"op "<<val1-val2<<endl;
        int v=val1-val2;
        return v;
    }
};

class animal{
    public:
    void speak(){
        cout<<"speak"<<endl;
    }
};


class dog : public animal{
    public:
    // void speak(){
    //     cout<<"bark"<<endl;
    // }
};
int main()
{
    P obj1,obj2;
    obj1.a=4;
    obj2.a=3;
    cout<<obj1 + obj2;


    dog obj;
    obj.speak();
    return 0;
}