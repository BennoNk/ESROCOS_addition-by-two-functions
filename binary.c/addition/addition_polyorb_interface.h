/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef addition_POLYORB_INTERFACE
#define addition_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../manager/manager_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "numbers"
----------------------------------------------------*/
void sync_addition_numbers(void *, size_t, void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "sum"
------------------------------------------------------ */
void vm_addition_sum(void *sum_param, size_t sum_param_len);
#endif
