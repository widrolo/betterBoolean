#include <stdio.h>
#include "boolean.h"

// This file is just meant for testing and should not be included in your project (unless you want it)

int main()
{
    boolean test = 0;
    SetBoolean(0, &test, True);
    SetBoolean(1, &test, True);
    SetBoolean(2, &test, True);
    SetBoolean(3, &test, True);
    SetBoolean(4, &test, True);
    SetBoolean(5, &test, True);
    SetBoolean(6, &test, True);
    SetBoolean(7, &test, True);
    
    SetBoolean(3, &test, False);

    printf("%i \n", test);
    return 0;
}