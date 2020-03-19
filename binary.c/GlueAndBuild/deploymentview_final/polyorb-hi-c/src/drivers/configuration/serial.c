#if (defined (__PO_HI_NEED_DRIVER_SERIAL_LINUX) || defined (__PO_HI_NEED_DRIVER_SERIAL_LINUX_RECEIVER) || defined (__PO_HI_NEED_DRIVER_SERIAL_LINUX_SENDER) || defined (__PO_HI_NEED_DRIVER_SERIAL_RASTA) || defined (__PO_HI_NEED_DRIVER_SERIAL_LEON) || defined (__PO_HI_NEED_DRIVER_SERIAL_LEON_SENDER) || defined (__PO_HI_NEED_DRIVER_SERIAL_LEON_RECEIVER))\n
/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "serial.h"


const __po_hi_c_serial_conf_t linux_ttyS0 = {
    .devname = "/dev/ttyS0",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};
const __po_hi_c_serial_conf_t linux_ttyUSB0 = {
    .devname = "/dev/ttyUSB0",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};
const __po_hi_c_serial_conf_t linux_ttyUSB1 = {
    .devname = "/dev/ttyUSB1",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};
const __po_hi_c_serial_conf_t linux_ttyUSB2 = {
    .devname = "/dev/ttyUSB2",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};
const __po_hi_c_serial_conf_t leon_rasta_apburasta0 = {
    .devname = "/dev/apburasta0",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};
const __po_hi_c_serial_conf_t leon_rasta_apburasta1 = {
    .devname = "/dev/apburasta1",
    .speed = __po_hi_c_b38400,
    .exist = {
        .speed = 1,
        .parity = 0,
        .bits = 0,
        .sending_wait = 0,
        .use_paritybit = 0
    }
};


flag __po_hi_c_Baudrate_T_Equal(const __po_hi_c_Baudrate_T* pVal1, const __po_hi_c_Baudrate_T* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void __po_hi_c_Baudrate_T_Initialize(__po_hi_c_Baudrate_T* pVal)
{

	(*(pVal)) = __po_hi_c_b9600;
}

flag __po_hi_c_Baudrate_T_IsConstraintValid(const __po_hi_c_Baudrate_T* pVal, int* pErrCode)
{
    flag ret = TRUE;
	
    ret = ((((((((((((*(pVal)) == __po_hi_c_b9600)) || (((*(pVal)) == __po_hi_c_b19200)))) || (((*(pVal)) == __po_hi_c_b38400)))) || (((*(pVal)) == __po_hi_c_b57600)))) || (((*(pVal)) == __po_hi_c_b115200)))) || (((*(pVal)) == __po_hi_c_b230400)));
    *pErrCode = ret ? 0 :  ERR_BAUDRATE_T;

	return ret;
}



flag __po_hi_c_Parity_T_Equal(const __po_hi_c_Parity_T* pVal1, const __po_hi_c_Parity_T* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

void __po_hi_c_Parity_T_Initialize(__po_hi_c_Parity_T* pVal)
{

	(*(pVal)) = __po_hi_c_even;
}

flag __po_hi_c_Parity_T_IsConstraintValid(const __po_hi_c_Parity_T* pVal, int* pErrCode)
{
    flag ret = TRUE;
	
    ret = ((((*(pVal)) == __po_hi_c_even)) || (((*(pVal)) == __po_hi_c_odd)));
    *pErrCode = ret ? 0 :  ERR_PARITY_T;

	return ret;
}



flag __po_hi_c_serial_conf_t_devname_Equal(const __po_hi_c_serial_conf_t_devname val1, const __po_hi_c_serial_conf_t_devname val2)
{
	return strcmp(val1, val2) == 0;

}

flag __po_hi_c_serial_conf_t_bits_Equal(const __po_hi_c_serial_conf_t_bits* pVal1, const __po_hi_c_serial_conf_t_bits* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

flag __po_hi_c_serial_conf_t_sending_wait_Equal(const __po_hi_c_serial_conf_t_sending_wait* pVal1, const __po_hi_c_serial_conf_t_sending_wait* pVal2)
{
	return (*(pVal1)) == (*(pVal2));

}

flag __po_hi_c_serial_conf_t_Equal(const __po_hi_c_serial_conf_t* pVal1, const __po_hi_c_serial_conf_t* pVal2)
{
	flag ret=TRUE;

    ret = __po_hi_c_serial_conf_t_devname_Equal(pVal1->devname, pVal2->devname);

    if (ret) {
        ret = (pVal1->exist.speed == pVal2->exist.speed);
        if (ret && pVal1->exist.speed) {
        	ret = (pVal1->speed == pVal2->speed);
        }

        if (ret) {
            ret = (pVal1->exist.parity == pVal2->exist.parity);
            if (ret && pVal1->exist.parity) {
            	ret = (pVal1->parity == pVal2->parity);
            }

            if (ret) {
                ret = (pVal1->exist.bits == pVal2->exist.bits);
                if (ret && pVal1->exist.bits) {
                	ret = __po_hi_c_serial_conf_t_bits_Equal((&(pVal1->bits)), (&(pVal2->bits)));
                }

                if (ret) {
                    ret = (pVal1->exist.sending_wait == pVal2->exist.sending_wait);
                    if (ret && pVal1->exist.sending_wait) {
                    	ret = __po_hi_c_serial_conf_t_sending_wait_Equal((&(pVal1->sending_wait)), (&(pVal2->sending_wait)));
                    }

                    if (ret) {
                        ret = (pVal1->exist.use_paritybit == pVal2->exist.use_paritybit);
                        if (ret && pVal1->exist.use_paritybit) {
                        	ret = (pVal1->use_paritybit == pVal2->use_paritybit);
                        }

                    }
                }
            }
        }
    }
	return ret;

}

void __po_hi_c_serial_conf_t_devname_Initialize(__po_hi_c_serial_conf_t_devname val)
{

	memset(val, 0x0, 21);

}
void __po_hi_c_serial_conf_t_bits_Initialize(__po_hi_c_serial_conf_t_bits* pVal)
{

	(*(pVal)) = 7;
}
void __po_hi_c_serial_conf_t_sending_wait_Initialize(__po_hi_c_serial_conf_t_sending_wait* pVal)
{

	(*(pVal)) = 0;
}
void __po_hi_c_serial_conf_t_Initialize(__po_hi_c_serial_conf_t* pVal)
{


	/*set devname */
	__po_hi_c_serial_conf_t_devname_Initialize(pVal->devname);
	/*set speed */
	pVal->exist.speed = 1;
	__po_hi_c_Baudrate_T_Initialize((&(pVal->speed)));
	/*set parity */
	pVal->exist.parity = 1;
	__po_hi_c_Parity_T_Initialize((&(pVal->parity)));
	/*set bits */
	pVal->exist.bits = 1;
	__po_hi_c_serial_conf_t_bits_Initialize((&(pVal->bits)));
	/*set sending_wait */
	pVal->exist.sending_wait = 1;
	__po_hi_c_serial_conf_t_sending_wait_Initialize((&(pVal->sending_wait)));
	/*set use_paritybit */
	pVal->exist.use_paritybit = 1;
	pVal->use_paritybit = FALSE;
}

flag __po_hi_c_serial_conf_t_IsConstraintValid(const __po_hi_c_serial_conf_t *pVal, int* pErrCode)
{
    flag ret = TRUE;
	
    ret = ((1 <= strlen(pVal->devname)) && (strlen(pVal->devname) <= 20));
    *pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_DEVNAME;
    if (ret) {
        if (pVal->exist.speed) {
        	ret = (((((((((((pVal->speed == __po_hi_c_b9600)) || ((pVal->speed == __po_hi_c_b19200)))) || ((pVal->speed == __po_hi_c_b38400)))) || ((pVal->speed == __po_hi_c_b57600)))) || ((pVal->speed == __po_hi_c_b115200)))) || ((pVal->speed == __po_hi_c_b230400)));
        	*pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_SPEED;
        }
        if (ret) {
            if (pVal->exist.parity) {
            	ret = (((pVal->parity == __po_hi_c_even)) || ((pVal->parity == __po_hi_c_odd)));
            	*pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_PARITY;
            }
            if (ret) {
                if (pVal->exist.bits) {
                	ret = ((7UL <= pVal->bits) && (pVal->bits <= 8UL));
                	*pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_BITS;
                }
                if (ret) {
                    if (pVal->exist.sending_wait) {
                    	ret = (pVal->sending_wait <= 9000000UL);
                    	*pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_SENDING_WAIT;
                    }
                    if (ret) {
                        if (pVal->exist.use_paritybit) {
                        	ret = TRUE;
                        	*pErrCode = ret ? 0 :  ERR_SERIAL_CONF_T_USE_PARITYBIT;
                        }
                    }
                }
            }
        }
    }

	return ret;
}

\n#endif
