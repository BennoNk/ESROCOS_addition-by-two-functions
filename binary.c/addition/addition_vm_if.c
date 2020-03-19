/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "addition_vm_if.h"

#include "addition.h"

#include "C_ASN1_Types.h"

void init_addition()
{
    static int init = 0;

    if (!init) {
        init = 1;
        addition_startup();
        extern void init_manager();
        init_manager();
    }
}

void addition_numbers (void *pmy_number1, size_t size_my_number1, void *pmy_number2, size_t size_my_number2)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccT_Int8 IN_number1;
    asn1SccT_Int8 IN_number2;

#ifdef __unix__
    asn1SccT_Int8_Initialize(&IN_number1);
    asn1SccT_Int8_Initialize(&IN_number2);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int8 (&IN_number1, pmy_number1, size_my_number1)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int8\n");
        #endif
        return;
    }

    if (0 != Decode_NATIVE_T_Int8 (&IN_number2, pmy_number2, size_my_number2)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int8\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    addition_PI_numbers (&IN_number1, &IN_number2);

}
