#include <stdio.h>
int main()
{
     char a[25];
    fgets(a,20,stdin);
    a[19]='\0';
    printf("%s",a);
    return 0;
}
