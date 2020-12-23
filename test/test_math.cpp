//
// Created by meter on 20-6-17.
//

#include "stdlib.h"
#include "assert.h"
#include "Math.h"
#include "stdio.h"

int main()
{
#ifdef  TEST_DEBUG
    printf("debug is  define %s\n",__FILE__);
#else
    printf("debug is not define %s\n",__FILE__);
#endif
    return 0;
}