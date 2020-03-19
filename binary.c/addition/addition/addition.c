/* User code: This file will not be overwritten by TASTE. */

#include "addition.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void addition_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

/*adds 2 numbers when it is called and passes the result to the manager function*/
void addition_PI_numbers(const asn1SccT_Int8 *IN_number1,
                         const asn1SccT_Int8 *IN_number2)
{
    asn1SccT_Int8 sum;
    sum = *IN_number1 + *IN_number2;
    addition_RI_sum(&sum);
}

