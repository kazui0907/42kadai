#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
    int i;
    int t;
    i = 0;
    t = 0;

    if((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a' && str[i] <='z'))
    {
        i++;
    }
    if(str[i]=='\0')
    {
        t = 1;
    }else
    {
        t = 0;
    }
    return (t);
}
int main()
{
	int t;
	char str[6] = "abfg";
	t=ft_str_is_alpha(str);
	printf("%d\n",t);

	return (0);
}