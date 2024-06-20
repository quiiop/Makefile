#include "main.h"

#ifdef FUNC1
    #include "./func1/func1.h"
#endif

#ifdef FUNC2
    #include "./func2/func2.h"
#endif

#ifdef FUNC3
    #include "./func3/func3.h"
#endif

int main(void)
{
    Func1();
    printf("hello main\n");
    return 0;
}