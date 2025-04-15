#include<stdio.h>
void a(void);
void b(void);
void c(void);

int x=1;
int main()
{
    int x=5;
    printf("Local x in outer scope of main is %d\n",x);
    {
        int x=7;
        printf("Local x in inner scope of main is %d\n",x);
    }
    printf("Local x in outer scope of main is %d\n",x);
    a();
    b();
    c();
    a();
    b();
    c();
    printf("Local x in main is %d\n",x);
    return 0;
}
void a(void)
{
    int x=25;
    printf("\nLocal x in a is %d after entering a\n",x);
    ++x;
    printf("Local");
}