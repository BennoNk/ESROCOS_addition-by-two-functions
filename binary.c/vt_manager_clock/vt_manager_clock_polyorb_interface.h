/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef vt_manager_clock_POLYORB_INTERFACE
#define vt_manager_clock_POLYORB_INTERFACE
#include <stddef.h>

#include "deployment.h"
#include "po_hi_transport.h"
#include "../../manager/manager_polyorb_interface.h"
#include "../../addition/addition_polyorb_interface.h"
#include "../../x86_partition_taste_api/x86_partition_taste_api_polyorb_interface.h"
#include "../../manager/manager_polyorb_interface.h"
/*----------------------------------------------------
-- Asynchronous Provided Interface "artificial_clock"
----------------------------------------------------*/
void po_hi_c_vt_manager_clock_artificial_clock(__po_hi_task_id);

/* ------------------------------------------------------
--  Synchronous Required Interface "clock"
------------------------------------------------------ */
void vm_vt_manager_clock_clock();
/* ------------------------------------------------------
--  Synchronous Required Interface "numbers_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_numbers_vt(void *number1, size_t number1_len, void *number2, size_t number2_len);
/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_check_queue_vt(void *, size_t *);
/* ------------------------------------------------------
--  Synchronous Required Interface "sum_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_sum_vt(void *sum_param, size_t sum_param_len);
#endif
