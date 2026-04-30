#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <vector>
#include "Order.h"

using namespace std;

vector<Order> selectOrders(vector<Order>& orders);
int knapsack(vector<Order>& orders, int capacity, vector<Order>& chosen);
vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& graph, int src);

#endif