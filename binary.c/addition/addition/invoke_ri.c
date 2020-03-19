/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "addition_polyorb_interface.h"

void addition_RI_sum(const asn1SccT_Int8 *IN_sum_param)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int8 ("INNERDATA: sum::T_Int8::sum_param", IN_sum_param);
        }
        printf ("\nINNER: addition,manager,sum,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_sum_param[sizeof(asn1SccT_Int8)] = {0};
    int size_IN_buf_sum_param=0;

    /* Encode each input parameter */
    size_IN_buf_sum_param = Encode_NATIVE_T_Int8(IN_buf_sum_param, sizeof(asn1SccT_Int8), IN_sum_param);
    if (-1 == size_IN_buf_sum_param) {
#ifdef __unix__
        printf ("** Encoding error in addition_RI_sum!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_addition_sum(void *, size_t);

    vm_addition_sum(IN_buf_sum_param, (size_t)size_IN_buf_sum_param);

}

