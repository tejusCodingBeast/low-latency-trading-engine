#ifndef BIDLIMITCOMPARER_H
#define BIDLIMITCOMPARER_H
#include "Limit.h"

using namespace std;

class BidLimitComparer
{
private:
    /* data */

public:
    BidLimitComparer();
    ~BidLimitComparer();
    int Compare(Limit* x, Limit* y);
};

BidLimitComparer::BidLimitComparer(){

}

BidLimitComparer::~BidLimitComparer(){

}

int BidLimitComparer::Compare(Limit* x, Limit* y){
    if(x->GetPrice() == y->GetPrice()){
        return 0;
    }else if(x->GetPrice() > y->GetPrice()){
        return -1;
    }else{
        return 1;
    }
}

#endif