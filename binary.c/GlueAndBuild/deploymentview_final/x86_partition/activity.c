#include <deployment.h>
#include <po_hi_task.h>
#include <po_hi_main.h>
#include <po_hi_time.h>
/*****************************************************/
/*  This file was automatically generated by Ocarina */
/*  Do NOT hand-modify this file, as your            */
/*  changes will be lost when you re-run Ocarina     */
/*****************************************************/

/*!
 * \fn void* vt_manager_clock_job (void)
 * \brief Function executed by the task vt_manager_clock
 *
 * This function is executed as soon as the task  is created. It performs the 
 * following operations:  Receive incoming data,  Execute tasks subprograms,  
 * Send output data.
 */
/*  Periodic task : vt_manager_clock*/
extern void po_hi_c_vt_manager_clock_artificial_clock 
    (__po_hi_task_id self);
void* vt_manager_clock_job (void)
{

  
/*!
 * Waiting for other tasks initialization
 */
  __po_hi_wait_initialization ();
  __po_hi_time_t offset;
  __po_hi_milliseconds (&(offset), 0);
  __po_hi_task_wait_offset (&(offset));
  __po_hi_compute_next_period (x86_partition_vt_manager_clock_k);
  
/*!
 * Waiting for the first dispatch instant
 */
  __po_hi_wait_for_next_period (x86_partition_vt_manager_clock_k);
  
/*!
 * Task body
 */
  while (1)
  {
    /*  Make_Thread_Compute_Entrypoint*/
    po_hi_c_vt_manager_clock_artificial_clock (x86_partition_vt_manager_clock_k);
    __po_hi_wait_for_next_period (x86_partition_vt_manager_clock_k);
  }
}


