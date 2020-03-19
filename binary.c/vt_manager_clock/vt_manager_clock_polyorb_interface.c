/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "vt_manager_clock_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
/* ------------------------------------------------------
-- Asynchronous Provided Interface "artificial_clock"
------------------------------------------------------ */
void po_hi_c_vt_manager_clock_artificial_clock(__po_hi_task_id e)
{
    (void)e;
   sync_manager_clock ();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "clock"
------------------------------------------------------ */
void vm_vt_manager_clock_clock()
{
   sync_manager_clock();
}

/* ------------------------------------------------------
--  Synchronous Required Interface "numbers_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_numbers_vt(void *number1, size_t number1_len, void *number2, size_t number2_len)
{
   sync_addition_numbers(number1, number1_len, number2, number2_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_check_queue_vt(void *res, size_t *res_len)
{
   sync_x86_partition_taste_api_manager_has_pending_msg(res, res_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "sum_vt"
------------------------------------------------------ */
void vm_vt_manager_clock_sum_vt(void *sum_param, size_t sum_param_len)
{
   sync_manager_sum(sum_param, sum_param_len);
}

