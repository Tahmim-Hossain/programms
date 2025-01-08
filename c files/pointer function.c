#include<stdio.h>
//#include<string.h>  //The string header file will make strlen the name of the function an existing function for c that will make conflict with the deta type. 
int strlen(char * st)
{ char *ptr =st;
int len=0;
while (*ptr!='\0')
{
    len++;
    ptr++;
}
return len;
}

int main(){
    char st[]="hello";
    int l=strlen(st);
    printf("%d\n",l);
    return 0;
}