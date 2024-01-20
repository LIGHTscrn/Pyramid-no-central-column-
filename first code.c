#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("whats the height :\n");
    }
    while (height < 1 );
    int i = 0;
    string h = "#";
    do
    {
        for (int m = i + 1; m < height; m++)
        {
            printf(" ");
        }
        for (int j = 0; j < 1; j++)
        {
            if (i % 2 == 0)
            {
                for (int k = 0; k <= i; k++)
                {
                    if (k == i / 2)
                    {
                        printf("%s  %s", h, h);
                    }
                    else
                    {
                        printf("%s%s", h, h);
                    }
                }
            }
            else
            {
                for (int l = 0; l < i; l++)
                {
                    if (l == (i / 2))
                    {
                        printf("%s%s  %s%s", h, h, h, h);
                    }
                    else
                    {
                        printf("%s%s", h, h);
                    }
                }
            }
        }
        i++;
        printf("\n");
    }
    while (i < height);
}
