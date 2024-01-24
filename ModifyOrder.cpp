#include <iostream>
#include "ModifyOrder.h"

ModifyOrder::ModifyOrder(IOrderCore* ordercore, double modify_price, 
int modify_quantity, bool is_buy_side): ordercore_(ordercore), 
IOrderCore(ordercore->GetOrderID(),ordercore->GetUsername(),ordercore->GetSecurityID()),
price_(modify_price), quantity_(modify_quantity),is_buy_side_(is_buy_side){

}

int ModifyOrder::GetOrderID() const{
    return order_id_;
}

std::string ModifyOrder::GetUsername() const{
    return username_;
}

int ModifyOrder::GetSecurityID() const{
    return security_id_;
}

double ModifyOrder::GetPrice() const{
    return price_;
}

int ModifyOrder::GetQuantity() const{
    return quantity_;
}

bool ModifyOrder::GetIsBuySide() const{
    return is_buy_side_;
}

CancelOrder& ModifyOrder::ToCancelOrder(){

}

Order& ModifyOrder::ToNewOrder(){

}