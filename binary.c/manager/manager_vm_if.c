/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifdef __unix__
    #include <stdlib.h>
    #include <stdio.h>
#else
    typedef unsigned size_t;
#endif

#include "manager_vm_if.h"

#include "manager.h"

#include "C_ASN1_Types.h"

void init_manager()
{
    static int init = 0;

    if (!init) {
        init = 1;
        manager_startup();
        extern void init_addition();
        init_addition();
        extern void init_x86_partition_taste_api();
        init_x86_partition_taste_api();
    }
}

void manager_clock ()
{
    /* Call to User-defined function */
    manager_PI_clock ();

}
void manager_sum (void *pmy_sum_param, size_t size_my_sum_param)
{
    /* Decoded input variable(s): developer can use them */
    asn1SccT_Int8 IN_sum_param;

#ifdef __unix__
    asn1SccT_Int8_Initialize(&IN_sum_param);
#endif

    /* Decode each input parameter */
    if (0 != Decode_NATIVE_T_Int8 (&IN_sum_param, pmy_sum_param, size_my_sum_param)) {
        #ifdef __unix__
            printf("\nError Decoding T_Int8\n");
        #endif
        return;
    }

    /* Call to User-defined function */
    manager_PI_sum (&IN_sum_param);

}
