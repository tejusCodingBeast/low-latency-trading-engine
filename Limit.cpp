#ifndef LIMIT_CPP
#define LIMIT_CPP
#include "Limit.h"

Limit::Limit(double price): price_(price), head_(nullptr), tail_(nullptr){

}

/* Getters */
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

// Returns a read-only version of orderbook at a specific level
// using a linked-list of OrderRecord objects that are copies of the orders
// in the book
list<OrderRecord>* Limit::GetLevelOrderRecords(){
    list<OrderRecord>* limit_orders = new list<OrderRecord>;
    int theoretical_queue_position = 0;
    if(IsEmpty()){
        return limit_orders;
    }else{
        while(head_ != nullptr){
            Order* current_order = head_->GetCurrentOrder();
            int order_id = current_order->GetOrderID();
            int order_quantity = current_order->GetCurrentQuantity();
            bool order_is_buy_side = current_order->GetIsBuySide();
            string order_username = current_order->GetUsername();
            int order_security_id = current_order->GetSecurityID();
            limit_orders->push_back(OrderRecord(order_id, order_quantity, price_,
            order_is_buy_side, order_username, order_security_id, theoretical_queue_position++));
        }
    }

    return limit_orders;
}

double Limit::GetPrice(){
    return price_;
}

OrderbookEntry* Limit::GetTail(){
    return tail_;
}

OrderbookEntry* Limit::GetHead(){
    return head_;
}

/* Setters */
void Limit::SetHead(OrderbookEntry* new_head){
    head_ = new_head;
}

void Limit::SetTail(OrderbookEntry* new_tail){
    tail_ = new_tail;
}

/* Member functions*/
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
#endif