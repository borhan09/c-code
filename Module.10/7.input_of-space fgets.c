#include <stdio.h>
#include <string.h>
int main()
{
    char a[25];
    fgets(a,20,stdin);
    printf("%s",a);   
    return 0;
}
