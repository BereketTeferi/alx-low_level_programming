#include "main.h"

int get_endianness(void)
{
    int num = 1;
    char *ptr = (char *)&num;
    return (int)(*ptr);
}
