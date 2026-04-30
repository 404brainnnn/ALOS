#ifndef VEHICLE_H
#define VEHICLE_H

#include <vector>
#include "Order.h"

class Vehicle {
public:
    int capacity;
    std::vector<Order> assignedOrders;

    Vehicle(int cap) {
        capacity = cap;
    }
};

#endif