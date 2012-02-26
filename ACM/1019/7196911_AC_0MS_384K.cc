#include <stdio.h>
#include <math.h>

long long pow10(long long n) {
    long long a;
    a=1;
    while(n--)
        a*=10;
    return a;
}

int main() {
    long long map[]={0,45,9045,1395495,189414495,(long long)(2E31-1)};
    long long map2[]={0,9,189,2889,38889};  //how many digits does {1 2 3 4 ... 99...9} have
    long long N,n,k,x,l,number,result,digit,k_;
    double h;
    scanf("%lld",&N);
    while(N--) {
        scanf("%lld",&l);
        for(k=1;l>map[k];k++);
        n=l-map[k-1];
        h=sqrt((double)2*n/k+(0.5+(double)map2[k-1]/k)*(0.5+(double)map2[k-1]/k))-0.5-(double)map2[k-1]/k;

        if(h==(int)h)
            x=h;
        else
            x=(int)h+1;
        n=n-map2[k-1]*(x-1)-(x-1)*x/2*k;
        for(k_=1;map2[k_]<n;k_++);   //area's number of digits
        n-=map2[k_-1];
        number=pow10(k_-1)+(n-1)/k_;
        digit=k_-(n-1)%k_;
        result=number/pow10(digit-1)%10;
        printf("%lld\n",result);
    }
    return 0;
}