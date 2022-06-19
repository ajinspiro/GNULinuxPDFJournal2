#include <stdio.h>
#include <string.h>

void func1(char *buffer);

int main(int argc, char **argv, char **envp)
{
    const char *read = "r";
    FILE *filePointer = popen("objdump -d add.so", read);

    char buffer[8192];
    while (!feof(filePointer))
    {
        fgets(buffer, 8192, filePointer);
        func1(buffer);
        // printf("%s", strstr(buffer));
    }

    pclose(filePointer);
}

void func1(char *buffer)
{
    // char temp[] = malloc(100);
    for (int i = 6; i <= 25; i++)
    {
        printf("%c", buffer[i]);
    }
    puts("\n");
}