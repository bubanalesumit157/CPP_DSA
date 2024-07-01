#include<stdio.h>
#define max 5
int queue[max];

int f=-1,r=-1;
void insert(int ele);
void delete();
int isfull();
int isempty();
void display();

int main(){

    insert(40);
    insert(41);
    insert(42);
    insert(43);
    insert(44);
    delete();
    delete();
    delete();
    insert(45);
    insert(46);
    insert(47);
    insert(48);
    insert(49);
    display();
    delete();
    delete();
    display();

}

int isfull(){
    if((r+1==f) || (f==0 && r==max-1)){
        // if( f == (r+1)%max) same as above
        printf("queue is full\n");
        return 1;
    }
    
    return 0;
    
}

int isempty(){
    if(f==-1){
        return 1;
    }
    return 0;
}

void insert(int ele){
    if(isfull()){
        printf("full, cant insert\n");
        return;
    }
    else{
        if(r==-1 && f==-1){
            f=r=0;
        }
        else if(r == max-1){
            r = -1;
        }
        else{
            r=r+1;
        }
        // this above can be written as r = (r+1)%max;
    
    queue[r]=ele;
    printf("inserted ele = %d\n",ele);
    }

}

void delete(){
    if(isempty()){
        printf("queue empty cant delete\n");
    }
    else{
        printf("deleted element is %d\n",queue[f]);
        if(f==r){
            // Q has only only one ele
            f=-1;
            r=-1;
        }
        else{
            if(f==max-1){
                f=0;
            }
            else{
                f = f+1;
            }
            // above if else statement can be written as f=(f+1)%max
        }
    }
}
void display(){
    int i;
    if(isempty()){
        printf("no ele to display\n");
    }
    else{
        printf("%d\n",f);
        for(i=f; i!=r ;i=(i+1)%max){
        printf("%d\n",queue[i]);
        
        }
        printf("%d\n",queue[i]);
        printf("%d\n",r);
    }



}