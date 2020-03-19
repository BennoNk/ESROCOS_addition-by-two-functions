/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <stdlib.h>
#ifdef __unix__
#include <stdio.h>
#include "PrintTypesAsASN1.h"
#include "timeInMS.h"
#endif

#include "C_ASN1_Types.h"
#include "manager_polyorb_interface.h"

void manager_RI_numbers(const asn1SccT_Int8 *IN_number1, const asn1SccT_Int8 *IN_number2)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        {
            PrintASN1T_Int8 ("INNERDATA: numbers::T_Int8::number1", IN_number1);
        }
        {
            PrintASN1T_Int8 ("INNERDATA: numbers::T_Int8::number2", IN_number2);
        }
        printf ("\nINNER: manager,addition,numbers,%lld\n", msc_time);
        fflush(stdout);
    }
#endif

    /* Buffer(s) to put the encoded input parameter(s) */
    static char IN_buf_number1[sizeof(asn1SccT_Int8)] = {0};
    int size_IN_buf_number1=0;
    static char IN_buf_number2[sizeof(asn1SccT_Int8)] = {0};
    int size_IN_buf_number2=0;

    /* Encode each input parameter */
    size_IN_buf_number1 = Encode_NATIVE_T_Int8(IN_buf_number1, sizeof(asn1SccT_Int8), IN_number1);
    if (-1 == size_IN_buf_number1) {
#ifdef __unix__
        printf ("** Encoding error in manager_RI_numbers!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }
    size_IN_buf_number2 = Encode_NATIVE_T_Int8(IN_buf_number2, sizeof(asn1SccT_Int8), IN_number2);
    if (-1 == size_IN_buf_number2) {
#ifdef __unix__
        printf ("** Encoding error in manager_RI_numbers!!\n");
#endif
        /* Crash the application due to message loss */
        extern void abort (void);
        abort();
    }

    /* Call to VM callback function */
    extern void vm_manager_numbers(void *, size_t, void *, size_t);

    vm_manager_numbers(IN_buf_number1, (size_t)size_IN_buf_number1, IN_buf_number2, (size_t)size_IN_buf_number2);

}

void manager_RI_check_queue(asn1SccT_Boolean *OUT_res)
{
#ifdef __unix__
    static int innerMsc = -1;
    if (-1 == innerMsc)
        innerMsc = (NULL != getenv("TASTE_INNER_MSC"))?1:0;
    if (1 == innerMsc) {
        long long msc_time = getTimeInMilliseconds();

        printf ("\nINNER: manager,x86_partition_taste_api,check_queue,%lld\n", msc_time);
        fflush(stdout);
    }
#endif


    /* Buffer(s) for the output parameter(s) */
    static char OUT_buf_res[sizeof(asn1SccT_Boolean)];
    size_t size_OUT_buf_res=0;

    /* Call to VM callback function */
    extern void vm_manager_check_queue(void *, size_t *);

    vm_manager_check_queue(OUT_buf_res, &size_OUT_buf_res);

    /* Decode each output parameter */
    if (0 != Decode_NATIVE_T_Boolean(OUT_res, OUT_buf_res, size_OUT_buf_res)) {
#ifdef __unix__
        printf("\nError Decoding T_Boolean\n");
#endif
        return;
    }

}

