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
        scanf("%s", &b); //When using char remember it takes %c as a single letter if need more letter than use array and %s for that.

        printf ("Enter your CGPA ");
        scanf ("%2f", &c);

        printf("your roll number: %d \n", a);
        printf("Your name: %s \n", b);
        printf("your cgpa is: %c ", c);
        return 0;
    }