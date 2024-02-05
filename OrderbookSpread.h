#ifndef ORDERBOOKSPREAD_H
#define ORDERBOOKSPREAD_H
#include <optional>

using namespace std;

// Pure Virtual
class OrderbookSpread{
    private:
    optional<double> bid_;
    optional<double> ask_;

    public:
    OrderbookSpread(double bid, double ask);
    optional<double> Spread();
};

#endif