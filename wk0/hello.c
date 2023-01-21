#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("hello, world\n");
    char c = get_char("Prompt ");
    printf("Your chosen char is %c\n", c); 
}
