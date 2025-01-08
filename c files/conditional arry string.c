#include<stdio.h>
#include<string.h>
int main(){
    char st1 [34];
    char st2[34];
    char c;
    int i=0;
    scanf("%s",st1);

    while(c=!'\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i]='\0';
    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%d\n",strcmp (st1,st2));
    return 0;
}