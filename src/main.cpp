#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Order.h"
#include "Vehicle.h"
#include "Algorithms.h"

using namespace std;

vector<Order> orders;

void loadOrders() {
    orders.clear();
    ifstream file("../data/orders.csv");
    string line;

    while(getline(file, line)) {
        stringstream ss(line);
        string val;
        vector<int> data;

        while(getline(ss, val, ',')) {
            data.push_back(stoi(val));
        }

        orders.emplace_back(data[0], data[1], data[2], data[3]);
    }

    cout << "Orders Loaded: " << orders.size() << endl;
}

void showOrders() {
    for(auto &o : orders) {
        cout << "ID:" << o.id
             << " Profit:" << o.profit
             << " Weight:" << o.weight
             << " Node:" << o.node << endl;
    }
}

void optimize() {
    auto sorted = selectOrders(orders);

    Vehicle v(10);
    vector<Order> chosen;

    int profit = knapsack(sorted, v.capacity, chosen);

    cout << "Max Profit: " << profit << endl;
}

int main() {
    int choice;

    do {
        cout << "\n1.Load\n2.Show\n3.Optimize\n4.Exit\n";
        cin >> choice;

        if(choice==1) loadOrders();
        else if(choice==2) showOrders();
        else if(choice==3) optimize();

    } while(choice!=4);

    return 0;
}