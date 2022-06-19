#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv, char **envp)
{
    const char *read = "r";
    // Start process by opening a pipe.
    FILE *filePointer = popen("ls -l", read);

    if (filePointer == 0)
        return -1;

    char buffer[8192];
    while (!feof(filePointer))
    {
        fgets(buffer, 8192, filePointer);
        printf("%s", buffer);
    }

    // Close file pointer
    pclose(filePointer);
}