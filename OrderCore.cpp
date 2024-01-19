#include <iostream>
#include "OrderCore.h"

OrderCore::OrderCore(const int order_id, const std::string username, const int security_id): 
IOrderCore(order_id, username, security_id){

}

int OrderCore::GetOrderID() const{
    return order_id_;
}

std::string OrderCore::GetUsername() const{
    return username_;
}

int OrderCore::GetSecurityID() const{
    return security_id_;
}