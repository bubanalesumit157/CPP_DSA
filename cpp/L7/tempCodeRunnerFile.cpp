int n=5,ans=0,c=0;
    while(n!=0){
        int rem=!(n&1);
        // int nt=(!rem);
        ans=ans+pow(2,c)*rem;
        c++;
        n=n>>1;

    }