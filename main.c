#include <stdio.h>
#include <math.h>

int main()
{
    int D, E;
    for (D = 0; D < 10; D++)
    {
        for (E = 0; E < 10; E++)
        {
            {
                if (pow(D * 10 + D, E) == D * 1000 + E * 100 + E * 10 + D)
                {
                    printf("%d %d\n", D, E);
                }
            }
        }
    }
    return 0;
}
