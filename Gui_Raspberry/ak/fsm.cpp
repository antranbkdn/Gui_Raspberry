/**
 ******************************************************************************
 * @author: ThanNT
 * @date:   13/08/2016
 ******************************************************************************
**/

#include "ak.h"
#include "message.h"
#include "fsm.h"

void fsm_dispatch(fsm_t* me, ak_msg_t* msg) {
	me->state(msg);
}
