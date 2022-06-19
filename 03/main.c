#include <stdio.h>

int main(int argc, char **argv, char **envp)
{
    char **temp = envp; // envp is array. mem address of first byte is stored in temp
    while (*(temp + 1) != 0) // check if next item in array is null
    {
        printf("%s\n", *temp);
        temp++;
    }
}