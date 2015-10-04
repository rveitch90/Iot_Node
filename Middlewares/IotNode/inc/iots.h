/*
this file summerises all IOT node stack headers

Each section contains a header/source combination, the combination defines an RTOS specific task related to that function
and their respective variables are declared within their own files. 
global vars and queues are declared in Iots_system.h
*/

#ifndef INC_IOTS_H
#define INC_IOTS_H

//include iot stack

#include "iots_system.h"
#include "iots_application.h"
#include "iots_network.h"
#include "iots_datalink.h"
#include "iots_physical.h"




#endif