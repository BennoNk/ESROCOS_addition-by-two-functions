/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef manager_POLYORB_INTERFACE
#define manager_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../addition/addition_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
/*----------------------------------------------------
-- Unprotected Provided Interface "clock"
----------------------------------------------------*/
void sync_manager_clock();

/*----------------------------------------------------
-- Unprotected Provided Interface "sum"
----------------------------------------------------*/
void sync_manager_sum(void *, size_t);

/* ------------------------------------------------------
--  Synchronous Required Interface "numbers"
------------------------------------------------------ */
void vm_manager_numbers(void *number1, size_t number1_len, void *number2, size_t number2_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_manager_check_queue(void *, size_t *);
#endif
