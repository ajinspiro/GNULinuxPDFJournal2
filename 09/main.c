#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv, char **envp)
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(toupper(c));
}

// #include <stdio.h>

// int main(int argc, char **argv, char **envp)
// {
//     int c = 63;

//     toupper(c);
// }
// main.c:18:5: warning: implicit declaration of function ‘toupper’ [-Wimplicit-function-declaration]
//    18 |     toupper(c);
//       |     ^~~~~~~
// doubt why is there no error ?
// doubt assignment statement produces value -1 as result. ok. so what about calls to methods with return type void
