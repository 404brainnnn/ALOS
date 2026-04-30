#ifndef ORDER_H
#define ORDER_H

class Order {
public:
    int id, profit, weight, node;

    Order(int id, int profit, int weight, int node) {
        this->id = id;
        this->profit = profit;
        this->weight = weight;
        this->node = node;
    }
};

#endif