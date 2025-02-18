#include<stdio.h>
int main(){
    int x=0,y=1,i,n,c;
    printf("enter a num : ");
    scanf("%d",&n);
    printf("fibonacci series = %d %d ",x,y);
    for(i=3;i<=n;i++)
    {
        c=x+y;
        printf("%d ",c);
        x=y;
        y=c;
    };
    return 0;
}
