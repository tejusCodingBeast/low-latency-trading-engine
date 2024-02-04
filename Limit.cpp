#ifndef LIMIT_CPP
#define LIMIT_CPP
#include "Limit.h"

Limit::Limit(double price){
    price_ = price;
    head_ = nullptr;
    tail_ = nullptr;
}

bool Limit::IsEmpty(){
    if(head_ == nullptr){
        return true; 
    }

    return false;
}

Side Limit::Side(){
    if(IsEmpty()){
        return Unknown;
    }else if(head_->GetCurrentOrder()->GetIsBuySide() == true){
        return Bid;
    }else{
        return Ask;
    }
}

uint Limit::GetLevelOrderCount(){
    uint order_count;
    while(head_ != nullptr){
        if(head_->GetCurrentOrder()->GetCurrentQuantity() > 0){
            order_count++;
        }
        head_ = head_->GetNext();
    }

    return order_count;
}

uint Limit::GetLevelOrderQuantity(){
    uint total_order_quantity;
    while(head_ != nullptr){
        uint head_order_quantity = head_->GetCurrentOrder()->GetCurrentQuantity();
        if(head_order_quantity > 0){
            total_order_quantity += head_order_quantity;
        }
        head_ = head_->GetNext();
    }

    return total_order_quantity;
}

list<OrderRecord> Limit::GetLevelOrderRecords(){

}
#endif