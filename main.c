#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char *strdup(const char *s);

int main(void)
{
    printf("----------------------STRLEN----------------------\n");
    // printf("strlen: %ld\n", strlen("Hello World!"));
    // printf("ft_strlen: %ld\n", ft_strlen("Hello World!"));

    // printf("strlen: %ld\n", strlen("Hello \0World!"));
    // printf("ft_strlen: %ld\n", ft_strlen("Hello \0World!"));

    // printf("strlen: %ld\n", strlen(""));
    // printf("ft_strlen: %ld\n", ft_strlen(""));
    
    //DAN SEGFAULT LOS 2
    // printf("strlen: %ld\n", strlen(0));
    // printf("ft_strlen: %ld\n", ft_strlen(0));

    printf("\n----------------------STRCPY----------------------\n");
    //STRCPY
    // printf("dest: %s\n", strcpy(c+2,c));
    // printf("dest: %s\n", ft_strcpy(b+2,b));

    printf("----------------------STRCMP----------------------\n");
    //COMPARE
    // printf("cmp res: %d\n", ft_strcmp(b,c));
    // printf("cmp res: %d\n", strcmp(b,c));

    printf("----------------------WRITE----------------------\n");
    // printf("||| N: %ld\n", ft_write(1, "HOLACARACOLA", 5));
    // printf("||| N: %ld\n", ft_write(1, "HOLACARACOLA", 25));
    // printf("||| N: %ld\n", ft_write(1, "HOLACARACOLA", 0));

    // int fdw = open("test.txt", O_WRONLY);
    // printf("File written ||| N: %ld\n", ft_write(fdw, "HOLACARACOLA", 12));
    // close(fdw);
    // fdw = open("test.txt", O_WRONLY);
    // printf("Non existing file ||| N: %d ||| errno: %d\n", ft_write(fdw, "HOLACARACOLA", 12), errno);


    printf("----------------------READ----------------------\n");
    // char str[100];
    // int fdr = open("test.txt", O_RDONLY);
    // printf("%s||| N: %d\n", &str, ft_read(fdr, &str, 5));
    // close(fdr);
    //fdr = open("sdfkjlaskdj", O_RDONLY);
    // printf("%s||| N: %d||| Errno: %d\n", &str, ft_read(fdr, &str, 5), errno);

    printf("----------------------STRDUP----------------------\n");

    return(0);
}