Write a function that adds two numbers.

Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
Where n1 and n2 are the two numbers
r is the buffer that the function will use to store the result
size_r is the buffer size
The function returns a pointer to the result
You can assume that you will always get positive numbers, or 0
You can assume that there will be only digits in the strings n1 and n2
n1 and n2 will never be empty
If the result can not be stored in r the function must return 0


/****/

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}

/*****/

julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
julien@ubuntu:~/0x06$ ./103-add
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
julien@ubuntu:~/0x06$
