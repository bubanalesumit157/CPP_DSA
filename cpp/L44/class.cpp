#include<iostream>
#include<stack>
using namespace std;

class C {
    public:
    int d=2;
    char s;
    static int stat;
    
    C(){
        cout<<"con"<<endl;
    }

    // C(int l,char s){
    //     d = l;
    //     this->s = s;
    // }

    // void setd(int g){
    //     d=g;
    // }

    // C(int f){
    //     d=f;
    // }

    // copy constructor
    // C(C& temp){
    //     char * ch= new char[strlen(temp.s)+1];
    //     strcpy(ch,temp.s);
        
    //     this-> d= temp.d;
    //     this-> s= ch;
    // 
    // void print(){
    //     cout<<endl<<d << " "<<s ; 
    // }
    // void edit(){
    //     s="dd";
    // }

    // desructor
    // ~C(){
    //     cout<<"decructor";
    // }
    static int random(){
        cout<<stat;
    }

};

int C :: stat=3; 


int main()
{
    stack<int> s;
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(23);
    cout<<s.size();
    // C c;
    // C *dynamic = new C;
    // // C *dy = new C(4);
    // C d(7,'x');
    // C f(d);
    // cout<<C::stat;


    // dynamic(2,'2'); wont work
    // cout<<sizeof(*dynamic);
    // cout<<endl<<(*dynamic).d; 

    // shallow copy
    // char s[7]="babbba";
    // C c1(1,s);
    // C c2;
    // c2=c1;
    // c2.print();
    // // c1.edit();
    // c1.s[0]='l';
    // c2.print();
    // c1.print();

    // // deep copy
    // C  c1;
    // C  c2;
    // c1.s="22";
    // c2=c1;
    // // c2.print();
    // // c1.print();
    // c1.s[0]='d';
    // cout<<c1.s<<endl;
    // c2.print();
    // c1.print();

    // C c1;
    // C * c2=new C;
    // delete(c2);

    // C c()
    return 0;
}