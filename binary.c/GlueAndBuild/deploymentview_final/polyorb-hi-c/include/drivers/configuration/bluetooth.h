#ifndef GENERATED_ASN1SCC_bluetooth_H
#define GENERATED_ASN1SCC_bluetooth_H
/*
Code automatically generated by asn1scc tool
*/
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif


typedef enum {
    __po_hi_c_d250K = 0,
    __po_hi_c_d1M = 1,
    __po_hi_c_d2M = 2
} __po_hi_c_Datarate_T;

flag __po_hi_c_Datarate_T_Equal(const __po_hi_c_Datarate_T* pVal1, const __po_hi_c_Datarate_T* pVal2);

void __po_hi_c_Datarate_T_Initialize(__po_hi_c_Datarate_T* pVal);

#define ERR_DATARATE_T		1  /**/
flag __po_hi_c_Datarate_T_IsConstraintValid(const __po_hi_c_Datarate_T* pVal, int* pErrCode);
typedef struct {
    
    byte arr[5];
} __po_hi_c_Address_T;


flag __po_hi_c_Address_T_Equal(const __po_hi_c_Address_T* pVal1, const __po_hi_c_Address_T* pVal2);

void __po_hi_c_Address_T_Initialize(__po_hi_c_Address_T* pVal);
/*-- __po_hi_c_bluetooth_conf_t --------------------------------------------*/
typedef asn1SccUint __po_hi_c_bluetooth_conf_t_channel;


typedef struct {
    __po_hi_c_bluetooth_conf_t_channel channel;
    __po_hi_c_Datarate_T datarate;
    __po_hi_c_Address_T address;

    struct {
        unsigned int datarate:1;
        unsigned int address:1;
    } exist;

} __po_hi_c_bluetooth_conf_t;

flag __po_hi_c_bluetooth_conf_t_channel_Equal(const __po_hi_c_bluetooth_conf_t_channel* pVal1, const __po_hi_c_bluetooth_conf_t_channel* pVal2);

flag __po_hi_c_bluetooth_conf_t_Equal(const __po_hi_c_bluetooth_conf_t* pVal1, const __po_hi_c_bluetooth_conf_t* pVal2);

void __po_hi_c_bluetooth_conf_t_channel_Initialize(__po_hi_c_bluetooth_conf_t_channel* pVal);
void __po_hi_c_bluetooth_conf_t_Initialize(__po_hi_c_bluetooth_conf_t* pVal);

#define ERR_BLUETOOTH_CONF_T_CHANNEL		14  /**/
#define ERR_BLUETOOTH_CONF_T_DATARATE		21  /**/
flag __po_hi_c_bluetooth_conf_t_IsConstraintValid(const __po_hi_c_bluetooth_conf_t* pVal, int* pErrCode);

extern const __po_hi_c_bluetooth_conf_t crazyflie_default; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif