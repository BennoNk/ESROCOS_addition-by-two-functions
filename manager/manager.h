/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_manager__
#define __USER_CODE_H_manager__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void manager_startup();

void manager_PI_clock();

void manager_PI_sum(const asn1SccT_Int8 *);

extern void manager_RI_numbers(const asn1SccT_Int8 *,
                               const asn1SccT_Int8 *);

#ifdef __cplusplus
}
#endif


#endif
