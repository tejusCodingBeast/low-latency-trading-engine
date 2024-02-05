#ifndef ORDERRECORD_CPP
#define ORDERRECORD_CPP
#include "OrderRecord.h"


OrderRecord::OrderRecord(double order_id, int quantity, double price, 
    bool is_buy_side, string username, int security_id, int theoretical_queue_position): 
    order_id_(order_id), quantity_(quantity), price_(price), is_buy_side_(is_buy_side),
    username_(username), security_id_(security_id), 
    theoretical_queue_position_(theoretical_queue_position){

}

#endif