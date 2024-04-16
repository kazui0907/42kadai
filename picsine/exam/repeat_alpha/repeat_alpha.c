#include<unistd.h>

int main (int argc,char **argv)
{
    int i;
    i = 0;

    if(argc != 2)
    {
        write(1,"\n",1);
        return (0);
    }
    while(argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            int t;
            t = 1;

            t = argv[1][i] - 'a' + 1;

            while(t > 0)
            {
                write(1,&argv[1][i],1);
                t--;
            }
        }else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
            int t;
            t = 1;

            t = argv[1][i] - 'A' + 1;

            while(t > 0)
            {
                write(1,&argv[1][i],1);
                t--;
            }
        }else
        {
            write(1,&argv[1][i],1);
        }
        i++;
    }
    write(1,"\n",1);
    return (0);
}