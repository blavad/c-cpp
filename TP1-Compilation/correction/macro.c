#include <stdio.h>

#define abs(x) ((x) < 0 ? -(x) : (x))
#define min(x, y) ((x) < (y) ? (x) : (y))

#define minabs(x, y) min(abs(x), abs(y))
#define min3(x, y, z) min(min(x, y), z)

int main()
{
    int x = -5;
    int y = 3;
    int z = -2;
    printf("minabs(%d, %d) = %d\n", x, y, minabs(x, y));
    printf("min3(%d, %d, %d) = %d\n", x, y, z, min3(x, y, z));

    return 0;
}