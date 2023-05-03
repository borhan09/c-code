#include <stdio.h>
int main()
{
    char a[7]="Sumon\0";
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}
