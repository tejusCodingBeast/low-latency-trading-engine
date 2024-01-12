#include <iostream>
#include <sstream>
#include "Order.h"

Order::Order(IOrderCore* ordercore, const double price, 
            const int quantity, const bool is_buy_side):
            ordercore_(ordercore), price_(price), 
            is_buy_side_(is_buy_side),
            initial_quantity_(quantity), current_quantity_(quantity),
            IOrderCore(ordercore->GetOrderID(), ordercore->GetUsername(),
            ordercore->GetSecurityID()){

}

Order::~Order(){

}

void Order::SetPrice(const double price){
    price_ = price;
}

void Order::SetIsBuySide(const bool is_buy_side){
    is_buy_side_ = is_buy_side;
}

void Order::SetCurrentQuantity(const int quantity){
    current_quantity_ = quantity;
}

int Order::GetOrderID() const{
    return order_id_;
}

std::string Order::GetUsername() const{
    return username_;
}

int Order::GetSecurityID() const{
    return security_id_;
}

double Order::GetPrice() const{
    return price_;
}

bool Order::GetIsBuySide() const{
    return is_buy_side_;
}

int Order::GetInitialQuantity() const{
    return initial_quantity_;
}

int Order::GetCurrentQuantity() const{
    return current_quantity_;
}

void Order::IncreaseQuantity(const uint quantity_delta){
    SetCurrentQuantity(GetCurrentQuantity()+quantity_delta);
}

void Order::DecreaseQuantity(const uint quantity_delta){
    int new_quantity = GetCurrentQuantity() - quantity_delta;
    if(new_quantity >= 0){
        SetCurrentQuantity(new_quantity);
    }else{
        std::cout << "Tried to set order to a negative quantity." << std::endl;
    }
}

std::string Order::ToString() const{
    std::ostringstream oss;
    oss << "Order ID: " << GetOrderID() << ", "
        << "Username: " << GetUsername() << ", "
        << "Security ID: " << GetSecurityID() << ", "
        << "Price: " << GetPrice() << ", "
        << "Quantity: " << GetCurrentQuantity() << ", "
        << "Side: " << GetIsBuySide();
    return oss.str();
}