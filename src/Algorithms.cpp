#include "Algorithms.h"
#include <algorithm>
#include <queue>
#include <climits>

// Greedy
vector<Order> selectOrders(vector<Order>& orders) {
    sort(orders.begin(), orders.end(), [](Order a, Order b) {
        return a.profit > b.profit;
    });
    return orders;
}

// DP
int knapsack(vector<Order>& orders, int capacity, vector<Order>& chosen) {
    int n = orders.size();
    vector<vector<int>> dp(n+1, vector<int>(capacity+1, 0));

    for(int i=1;i<=n;i++){
        for(int w=0;w<=capacity;w++){
            if(orders[i-1].weight <= w)
                dp[i][w] = max(dp[i-1][w],
                    orders[i-1].profit + dp[i-1][w - orders[i-1].weight]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    int w = capacity;
    for(int i=n;i>0;i--){
        if(dp[i][w] != dp[i-1][w]){
            chosen.push_back(orders[i-1]);
            w -= orders[i-1].weight;
        }
    }

    return dp[n][capacity];
}

// Graph
vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& graph, int src) {
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();

        for(auto &edge : graph[u]){
            int v = edge.first, wt = edge.second;
            if(dist[v] > d + wt){
                dist[v] = d + wt;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}