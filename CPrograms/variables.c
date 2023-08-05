#include<stdio.h>
int main()
    {
        int a;
        char b[15];
        float c;
        double d;

        printf ("Enter Your Roll number \n"); //Integer
        scanf ("%d", &a);

        printf ("Enter your name \n");
        scanf("%s", &b);


        printf("your roll number: %d \n", a);
        printf("Your name: %s", b);
        return 0;
    }