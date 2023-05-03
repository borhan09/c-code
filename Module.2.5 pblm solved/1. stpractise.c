#include <stdio.h>
 int main()
 {
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =a+b;
    int abs=a-b;
    int mult=a*b;
    float dvd=a*1.0/b;

    printf("a+b=%d\n",sum);
    printf("a-b=%d\n",abs);
    printf("a*b=%d\n",mult);
    printf("a/b =%0.3f\n",dvd);

    return 0;
 }