/* User code: This file will not be overwritten by TASTE. */

#include "manager.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

/*global variables*/
asn1SccT_Int8 number1 = 1;
asn1SccT_Int8 number2 = 1;

void myhandler ();
void setNumber1 ();
void setNumber2 ();

/*setter*/
void setNumber1 (int ii)
{
    number1 = ii;
}
void setNumber2 (int ii)
{
    number2 = ii;
}

/*initialization*/
void manager_startup()
{
    (void) signal (SIGINT, myhandler);
}

/*manager_PI_clock is executed every 2 seconds*/
void manager_PI_clock()
{
    /*set random numbers and give them to the addition function*/
    setNumber1(rand() % 11);
    setNumber2(rand() % 11);
    manager_RI_numbers(&number1,&number2);
}

/*manager_PI_sum is executed when it is called by another function*/
void manager_PI_sum(const asn1SccT_Int8 *IN_sum_param)
{
    printf ("sum of number1 and number2: ");
    printf ("%lld + %lld = %lld \n",number1,number2,*IN_sum_param);
}

/*exit by pressing Crtl+C*/
void myhandler ()
{
    printf ("Crtl+C hit!\n");
    exit (0);
}

