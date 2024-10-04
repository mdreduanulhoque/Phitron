#include <stdio.h>
int main()
{

    // Logical and

    /*
    true && true = true
    true && false = false
    false && true = false
    false && false = false
    */

    if (5 > 3 && 5 < 2)
    {
        printf("Logical error\n");
    }
    else
    {
        printf("Logical and is right\n");
    }

    // Logical or

    /*
    true || true = true
    true || false = true
    false || true = true
    false || false = false
    */

    if (5 > 8 || 7 < 9)
    {
        printf("Logical or is right");
    }
    else
    {
        printf("Logical Error");
    }

    // Logical Not

    /*
    ! of true = false
    ! of false = true
    */

    return 0;
}