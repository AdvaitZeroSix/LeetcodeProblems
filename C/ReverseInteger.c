int reverse(int x){
        int sign;
    
    long temp,rev=0;
    while (x!=0){
        rev=rev*10;
        temp=x%10;
        rev=rev+(x%10);
        x=(x-temp)/10;
    }
    if (rev<INT_MIN){
        return 0;
    }
    if(rev>INT_MAX){
        return 0;
    }
    return (int)rev;
    }
