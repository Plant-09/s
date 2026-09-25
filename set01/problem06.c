#include <stdio.h>

int input_size()
{
    int n;
    printf("enter the number of numbers\n");
    scanf("%d",&n);
    return n;
}
void input_num(int n,int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("enter a number\n");
        scanf("%d",&a[i]);
    }
 
}
int sum_of_num(int n,int a[n])
{
    int sum;
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum)
{
    for(int i=0;i<n-1;i++)
    {
        printf("%d+",a[i]);
    }
    printf("+%d=%d",a[n-1],sum);
}
int main()
{
    int n,sum;
    n=input_size();
    int a[n];
    input_num(n,a);
    sum=sum_of_num(n,a);
    output(n,a,sum);
}
