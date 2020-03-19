/* This file was generated automatically: DO NOT MODIFY IT ! */

#include "addition_polyorb_interface.h"

#include "activity.h"
#include "types.h"
#include "po_hi_task.h"
#include "addition_vm_if.h"

/*----------------------------------------------------
-- Unprotected Provided Interface "numbers"
----------------------------------------------------*/
void sync_addition_numbers(void *number1, size_t number1_len, void *number2, size_t number2_len)
{
   addition_numbers(number1, number1_len, number2, number2_len);
}

/* ------------------------------------------------------
--  Synchronous Required Interface "sum"
------------------------------------------------------ */
void vm_addition_sum(void *sum_param, size_t sum_param_len)
{
   sync_manager_sum(sum_param, sum_param_len);
}

