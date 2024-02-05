#ifndef ASKLIMITCOMPARER_H
#define ASKLIMITCOMPARER_H
#include "Limit.h"

using namespace std;

class AskLimitComparer{
private:

public:
    AskLimitComparer();
    ~AskLimitComparer();
    int Compare(Limit* x, Limit* y);
};

AskLimitComparer::AskLimitComparer(){

}

AskLimitComparer::~AskLimitComparer(){

}

int AskLimitComparer::Compare(Limit* x, Limit* y){
    if(x->GetPrice() == y->GetPrice()){
        return 0;
    }else if(x->GetPrice() < y->GetPrice()){
        return -1;
    }else{
        return 1;
    }
}

#endif