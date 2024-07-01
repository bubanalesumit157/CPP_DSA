#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/*
 Q) Suppose you go to a Book store as there's a special sale on old books.These books 
    consist of every genre which are arranged in a single row. To make sure all the books get sold,
    the owner has put some conditions in the sale.Customers who buy 2 or more books get extra 
    50% off and Bookmarks free.Customer can buy any number of books but he cannot randomly 
    pick any book when buying 2 or more book. They can pick any single book as their starting point.
    The remaining books will be consecutive books that follow the chosen starting book.For example,
    if are willing to buy 2 books,there are 20 books in shelf, u pick 2nd book,
    the other book you'll get is 3rd book.You only have freedom to choose only one book for any 
    number of books you buy.And also u should buy the books uner spefified Budget.
    Suppose there are total 'N' books you have to buy 'K' books under specified amount 
    of money 'Budget'. You are given array of price of books 'A[]'. Output will be the number of 
    valid starting positions of book in above specified manner


Example 1:

    Input : 
    N = 5
    A[] = {200, 150, 300, 180, 100,120}
    K = 3
    Budget = 300

    OUTPUT : 
    Count = 2

    Explanation :
    There are '2' indexes/postions at which you can choose a book and you 
    can get 3 books under your 'Budget'.Those 2 indexes are '2' and '3'.
    {200, 150, 300} = 325
    {150, 300, 180} = 315 
    {300, 180, 100} = 290
    {180, 100, 120} = 260

    
    
Example 2:
    Input : 
    N = 4
    A[] = {250, 300, 270, 180}
    K = 2
    Budget = 150
    Output :
    Count = 0
    Explanation:
    There are no such indexes where prices satisfy your budget
    so the count is '0'.



Code format:

    int sum_windows(long long int A[],long long int N, long long int k,int ksum) {

    }

Expected Time Complexity: O(N)

Expected Auxiliary Space: O(K)

Constraints:
    0 <= N <= 10^5
    0 <= A[i] <= 10^5
    0 <= K <= N


*/


// Solution:
int SUM(queue<long long int> q,int k){
    int s=0;
    for(int i=0;i<k;i++){
        s=s+q.front();
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    if(k>1){
        s=s/2;
    }
    return s;
}

int sum_windows(long long int A[],long long int N, long long int k,int balance_amt) {

    queue<long long int> q;
    if(k==0){
        return 0;
    }
    if(N>=k){
        for(int j=0;j<k;j++){
            q.push(A[j]); 
        }
    }

    int i=k;
    int sum_count=0;
    while(i<=N){
        int ele=SUM(q,k);
        if(ele <= balance_amt){
            sum_count++;
            // cout<<i<<endl;
        }
        q.pop();
        q.push(A[i]);
        cout<<i<<endl;
        i++;
    }
    
    return sum_count;
}


int main()
{
     long long int n = 6;
    long long int A[]={200 ,220 ,300 ,180, 100, 120};
   
    long long int No_of_books = 3;
    int balance_amt=300;
    int sum_count=sum_windows(A, n, No_of_books, balance_amt);
    cout<<sum_count;
    return 0;
}