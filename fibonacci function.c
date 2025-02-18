#include<stdio.h>
int main(){
    int n;
    printf(" Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
}
int fibonacci(int n){
    int x=0,y=1,i,c;

    if(n==0)
        printf("Enter a valid number\n");

    printf("\n Fibonacci Series :-\n");
    if(n==1)
    printf(" %d",x);
    else if(n==2)
    printf(" %d %d",x,y);
    else{
    printf(" %d %d ",x,y);
    for(i=3;i<=n;i++)
    {
        c=x+y;
        printf("%d ",c);
        x=y;
        y=c;
    }
    }
}
