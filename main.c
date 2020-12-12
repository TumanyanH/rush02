#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str);

char ***spliter(char *str)
{
    int i;
    int j;
    int k;
    int number;
    char num;
    char string[20];
    char ***str;

    i = 0;
    j = 0;
    k = 0;
    number = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num[j] = str[i];
            j++;
        }
        else if (str[i] == ':')
        {
            number = ft_atoi(num);
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            string[k] = str[i];
            k++;
        }
        str[i][0] = number;
        // str[i][1] = string;
        i++;
    }
}

int main(int argc, char **argv)
{
    char *str = (char *)malloc(100);
    int buf = open("numbers.dict.txt", 0, 1);
    int res = read(buf, str, 1000);
    char ***splited = spliter(str);
    printf("%s\n", str);
    close(buf);
    return 0;
}