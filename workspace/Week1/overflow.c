#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*int*/long long n = 0;
    /*while(true)
    {
        printf("a is %i\n", n);
        n++//will loop forever
    }*/
    for(int i = 0; i < 64; i++)
    {
        printf("n is %lld\n", n);
        n = n * 2; 
    }
}