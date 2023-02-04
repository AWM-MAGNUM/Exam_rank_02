#include<unistd.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int i;
    int flag = 0;

    if (argc == 2)
    {
        i = 0;
        // parcours les espaces et tabulations en début de phrase
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        
        int len = strlen(argv[1]);
        // parcours les espaces et tabulations en fin de phrase
        while (len > i && (argv[1][len - 1] == ' ' || argv[1][len - 1] == '\t'))
            len--;
        
        while (i < len)
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                flag = 1;
                // parcours les espaces et tabulations consécutifs
                while (i < len && (argv[1][i] == ' ' || argv[1][i] == '\t'))
                    i++;
                i--;
            }
            if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (flag)
                    write(1, "   ", 3);
                flag = 0;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

