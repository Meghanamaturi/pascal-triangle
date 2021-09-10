#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter no. of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        int c=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",c);
            c=c*(i-j)/j;
            
        }
        printf("\n");
    }

}