#include <stdio.h>

    void input(char s[])
    {
        printf("enter a string");
        scanf("%s",s);
    }
    int length(char s[])
    {
        int i=0;
        int l;
        while(s[i]!='\0')
        {
            i++;
        }
        return i;
    }
    void output(int l,char s[])
    {
        printf("the length of %s is %d",s,l);
    }
    int main()
    {
        char s[100];
        int l;
        input(s);
        l=length(s);
        output(l,s);
        return 0;
    }
