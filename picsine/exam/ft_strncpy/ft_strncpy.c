#include<unistd.h>
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;

    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }

    while(i != n)
    {
        dest[i] = '0';
        i++;
    }
    return(dest);
}

int	main(void)
{
	char src[9] = "abcdefg";
	char dest[5];
	int i;

	ft_strncpy(dest,src,7);

	for(i=0;i<=7;++i)
	{
    	printf("%c", dest[i]);
	}
    write(1,"\n",1);

	return (0);

}