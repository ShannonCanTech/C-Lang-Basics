#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How many minutes did you shower for? ");
    int minutes;
    
    do {
    minutes = get_int();
    }
    while (minutes == 0);
   
   
    int bottles = 12 * (minutes);
   
    printf("Mintes: %i\n", minutes);
    printf("Bottles: %i\n", bottles);
}