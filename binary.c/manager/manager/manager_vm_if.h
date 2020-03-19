/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef VM_IF_manager
#define VM_IF_manager

#ifdef __cplusplus
extern "C" {
#endif

#include "C_ASN1_Types.h"

/*
 * Function initialization:
 * Calls all dependent user (or GUI) startup code - including sychronous RI
*/
void init_manager();

void manager_clock ();
extern void manager_PI_clock ();
void manager_sum (void *pmy_sum_param, size_t size_my_sum_param);
extern void manager_PI_sum (const asn1SccT_Int8 *);
#ifdef __cplusplus
}
#endif

#endif
