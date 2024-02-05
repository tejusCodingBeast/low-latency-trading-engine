#ifndef ORDERBOOKSPREAD_CPP
#define ORDERBOOKSPREAD_CPP
#include "OrderbookSpread.h"

OrderbookSpread::OrderbookSpread(double bid, double ask){
    bid_ = bid;
    ask_ = ask;
}

OrderbookSpread::~OrderbookSpread(){

}

optional<double> OrderbookSpread::Spread(){
    if (!bid_.has_value() || !ask_.has_value()) {
        // If either bid_ or ask_ does not have a value, return an empty optional
        return std::nullopt;
    } else {
        // Subtract the values contained in bid_ and ask_ and return the result
        return ask_.value() - bid_.value();
}

#endif