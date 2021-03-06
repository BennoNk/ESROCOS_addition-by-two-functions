/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "manager_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "manager_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "clock"
----------------------------------------------------*/
void sync_manager_clock()
{
   manager_clock();
}

/*----------------------------------------------------
-- Unprotected Provided Interface "sum"
----------------------------------------------------*/
void sync_manager_sum(void *sum_param, size_t sum_param_len)
{
   manager_sum(sum_param, sum_param_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "numbers"
------------------------------------------------------ */
void vm_manager_numbers(void *number1, size_t number1_len, void *number2, size_t number2_len)
{
   sync_addition_numbers(number1, number1_len, number2, number2_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "check_queue"
------------------------------------------------------ */
void vm_manager_check_queue(void *res, size_t *res_len)
{
   sync_x86_partition_taste_api_manager_has_pending_msg(res, res_len);
}

