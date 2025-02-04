#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);
int ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char *ft_strdup(const char *s);

int main(void)
{
    printf("----------------------STRLEN----------------------\n");
    printf("strlen: %ld\n", strlen("Hello World!"));
    printf("ft_strlen: %ld\n", ft_strlen("Hello World!"));

    printf("\nstrlen: %ld\n", strlen("Hello \0World!"));
    printf("ft_strlen: %ld\n", ft_strlen("Hello \0World!"));

    printf("\nstrlen: %ld\n", strlen(""));
    printf("ft_strlen: %ld\n", ft_strlen(""));

    printf("\n----------------------STRCPY----------------------\n");
    char a[15] = "HOLACARACOLA";
    char aa[15] = "HOLACARACOLA";
    char b[15] = "PATATITA";
    char bb[15] = "PATATITA";

    printf("strcpy: %s\n", strcpy(aa,bb));
    printf("ft_strcpy: %s\n", ft_strcpy(a,b));

    char c[15] = "HOLACARACOLA";
    char cc[15] = "HOLACARACOLA";
    char d[15] = "";
    char dd[15] = "";
    printf("\nstrcpy: %s\n", strcpy(cc,dd));
    printf("ft_strcpy: %s\n", ft_strcpy(c,d));

    char e[15] = "HOLACARACOLA";
    char ee[15] = "HOLACARACOLA";
    printf("\nstrcpy: %s\n", strcpy(ee,ee+2));
    printf("ft_strcpy: %s\n", ft_strcpy(e,e+2));

    char f[15] = "HOLACARACOLA";
    char ff[15] = "HOLACARACOLA";
    printf("\nstrcpy: %s\n", strcpy(ff+2,ff));
    printf("ft_strcpy: %s\n", ft_strcpy(f+2,f));

    printf("----------------------STRCMP----------------------\n"); //A lo mejor hay que cambiarlo a -1 0 1
    printf("strcmp res: %d\n", strcmp("Hello","Hello"));
    printf("ft_strcmp res: %d\n", ft_strcmp("Hello","Hello"));

    printf("\nstrcmp res: %d\n", strcmp("Hello","Hell!"));
    printf("ft_strcmp res: %d\n", ft_strcmp("Hello","Hell!"));

    printf("\nstrcmp res: %d\n", strcmp("Hello","He"));
    printf("ft_strcmp res: %d\n", ft_strcmp("Hello","He"));

    printf("\nstrcmp res: %d\n", strcmp("Hell000000000","Hello"));
    printf("ft_strcmp res: %d\n", ft_strcmp("Hell000000000","Hello"));

    printf("\nstrcmp res: %d\n", strcmp("",""));
    printf("ft_strcmp res: %d\n", ft_strcmp("",""));

    printf("----------------------WRITE----------------------\n");
    printf("write:\n");
    printf(" ||| N: %ld\n", write(1, "HOLACARACOLA", 5));
    printf("ft_write:\n");
    printf(" ||| N: %ld\n", ft_write(1, "HOLACARACOLA", 5));
    printf("\nwrite:\n");
    printf(" ||| N: %ld\n", write(1, "HOLACARACOLA", 13));
    printf("ft_write:\n");
    printf(" ||| N: %ld\n", ft_write(1, "HOLACARACOLA", 13));
    printf("\nwrite:\n");
    printf(" ||| N: %ld\n", write(1, "HOLACARACOLA", 0));
    printf("ft_write:\n");
    printf(" ||| N: %ld\n", ft_write(1, "HOLACARACOLA", 0));

    int fdw = open("test.txt", O_WRONLY);
    printf("\nFile write ||| N: %ld\n", write(fdw, "HOLACARACOLA ", 13));
    printf("File ft_write ||| N: %ld\n", ft_write(fdw, "HOLACARACOLA ", 13));
    close(fdw);

    fdw = open("teshgjgjgjt.txt", O_WRONLY);
    printf("\nNon existing file write ||| N: %ld \n", write(fdw, "HOLACARACOLA ", 13));
    printf("Non existing file ft_write ||| N: %ld \n", ft_write(fdw, "HOLACARACOLA ", 13));

    printf("----------------------STRDUP----------------------\n");
    
    char *dupl = strdup("HOLIWI");
    printf("%s\n", dupl);
    char *dupl2 = ft_strdup("HOLIWI");
    printf("%s\n", dupl2);
    free(dupl);
    free(dupl2);

    dupl = strdup("");
    printf("\n-%s-\n", dupl);
    dupl2 = ft_strdup("");
    printf("-%s-\n", dupl2);
    free(dupl);
    free(dupl2);

    printf("----------------------READ----------------------\n");
    char str[100];
    char str2[100];

    int fdr = open("test.txt", O_RDONLY);
    printf("%s||| N: %ld\n", str, read(fdr, &str, 5));
    close(fdr);
    fdr = open("test.txt", O_RDONLY);
    printf("%s||| N: %ld\n", str2, ft_read(fdr, &str2, 5));
    close(fdr);

    fdr = open("test.txt", O_RDONLY);
    printf("\n%s||| N: %ld\n", str, read(fdr, &str, 50));
    close(fdr);
    fdr = open("test.txt", O_RDONLY);
    printf("%s||| N: %ld\n", str2, ft_read(fdr, &str2, 50));
    close(fdr);

    fdr = open("sdfkjlaskdj", O_RDONLY);
    printf("\nN: %ld\n", read(fdr, &str, 5));
    printf("N: %ld\n", ft_read(fdr, &str2, 5));

    return(0);
}