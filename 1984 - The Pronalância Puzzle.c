#include<stdio.h>

int main()
{
    long long int n;
    int i;
    while(scanf("%lld",&n)!=EOF){
        while(n){
            i = n % 10;
            n /= 10;
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
