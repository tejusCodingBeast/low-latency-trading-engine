#include <iostream>
#include "ModifyOrder.h"

ModifyOrder::ModifyOrder(IOrderCore* ordercore, double modify_price, 
int modify_quantity, bool is_buy_side): ordercore_(ordercore), 
IOrderCore(ordercore->GetOrderID(),ordercore->GetUsername(),ordercore->GetSecurityID()),
price_(modify_price), quantity_(modify_quantity),is_buy_side_(is_buy_side){

}

CancelOrder& ToCancelOrder(){

}

Order& ToNewOrder(){

}