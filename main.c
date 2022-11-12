#include "main.h"

int main(int argc, char const *argv[])
{
    char *username;
    username = (char *)malloc(20 * sizeof(char));
    username = getlogin();
    char *lineptr;
    size_t n = 0;
    ssize_t nchars_read;

    (void)argc;
    (void)argv;
    while (1)
    {
        printf("(%s@centigrade) $ ", username);
        nchars_read = getline(&lineptr, &n, stdin);
        if(nchars_read == -1){
            printf("\nexiting");
            return -1;
        }
        printf("%s", lineptr);
    }
    return 0;
}
