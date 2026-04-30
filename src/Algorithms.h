#pragma once
#include <vector>
#include "Order.h"

extern std::vector<Order> orders;

void loadOrders();
int optimize();