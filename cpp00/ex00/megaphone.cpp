#include <iostream>

int main(int ac, char *av[])
{
    int i = 1;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (av[i])
        {
            for (j = 0; av[i][j]; j++)
            {
                std::cout << (char)toupper(av[i][j]);
            }
            if (i < ac - 1)
                std::cout << ' ';
            i++;
        }
    }
    std::cout << "\n";
    return (0);
}