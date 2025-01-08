#include<stdio.h>
int occuerence(char st[],char c)
{
    char *ptr = st;
    int count=0;
    while (*ptr!='\0')
    {
        if (*ptr ==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[]="hello";
    int count = occuerence(st ,'l');
    printf("occuerence=%d\n",count);
    return 0;
}