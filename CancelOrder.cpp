#include <iostream>
#include "CancelOrder.h"

CancelOrder::CancelOrder(IOrderCore* ordercore): ordercore_(ordercore), 
IOrderCore(ordercore->GetOrderID(), ordercore->GetUsername(), ordercore->GetSecurityID()){
}

CancelOrder::~CancelOrder(){

}

int CancelOrder::GetOrderID(){
    return order_id_;
}


std::string CancelOrder::GetUsername(){
    return username_;
}


int CancelOrder::GetSecurityID(){
    return security_id_;
}
