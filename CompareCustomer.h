#ifndef COMPARECUSTOMER_H_INCLUDED
#define COMPARECUSTOMER_H_INCLUDED
#include "Customer.h"
struct CompareCustomer
{
    bool operator()( const Customer &C1,Customer &C2)
    {

        return C1.getArrivalTime()>C2.getArrivalTime();
    }
};

#endif // COMPARECUSTOMER_H_INCLUDED
