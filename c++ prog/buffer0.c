#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char c1, c2 = 'i';
    c1 = getch();  // do not require input key to be pressed and do not show previously entered key
    c2 = getche(); // do not require input key to be pressed but still shows previously entered key
    printf("%c", c2);
    c2 = getchar(); // require an enter key to be pressed
    printf("\n%c", c1);
    printf("%c", c2);
}
