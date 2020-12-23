#include "mathlib/Math.h"
#include "main.h"
#include "stdio.h"

int main(int argx, char *argv[])
{

#ifdef  TEST_DEBUG
    printf("debug is  define %s\n",__FILE__);
#else
    printf("debug is not define %s\n",__FILE__);
#endif
    int sum =  gloabl_add(1,2);
    printf("sum is %d",sum);
    return 0;
}