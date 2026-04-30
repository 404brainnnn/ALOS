#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Order.h"
#include "Vehicle.h"
#include "Algorithms.h"

using namespace std;

vector<Order> orders;



void showOrders() {
    for(auto &o : orders) {
        cout << "ID:" << o.id
             << " Profit:" << o.profit
             << " Weight:" << o.weight
             << " Node:" << o.node << endl;
    }
}

int optimize() {
    auto sorted = selectOrders(orders);

    Vehicle v(10);
    vector<Order> chosen;

    int profit = knapsack(sorted, v.capacity, chosen);

    cout << "Max Profit: " << profit << endl;
    return profit;
}

int main() {
    int choice;

    do {
        cout << "\n1.Load\n2.Show\n3.Optimize\n4.Exit\n";
        cin >> choice;

        if(choice==1) loadOrders();
        else if(choice==2) showOrders();
        else if(choice==3) {
            int profit = optimize();
            cout << "Returned Profit: " << profit << endl;
        }

    } while(choice!=4);

    return 0;
}