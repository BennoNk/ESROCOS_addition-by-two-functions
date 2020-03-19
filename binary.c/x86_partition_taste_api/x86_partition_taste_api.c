/* TASTE API */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <deployment.h>

#include "x86_partition_taste_api.h"

extern int __po_hi_gqueue_get_count(int, int);

#ifdef __unix__
    #include <stdio.h>
#endif

void x86_partition_taste_api_startup()
{
    /* TASTE API start up (nothing to do) */
}

void x86_partition_taste_api_PI_manager_has_pending_msg(asn1SccT_Boolean *res) {
    /* Check all incoming queues (if any) for a pending message */
    (void)res;
}

