## 🖥️ GUI Preview

![GUI Screenshot](Screenshottt.png)

🚚 Advanced Logistics Optimization System (ALOS)

📌 Introduction

The Advanced Logistics Optimization System (ALOS) is a C++ based application designed to simulate a real-world delivery management system.
It focuses on optimizing delivery operations by selecting profitable orders, assigning them efficiently to vehicles, and computing optimal delivery routes.

This project demonstrates the practical application of core Data Structures and Algorithms concepts learned in class.



🎯 Objective
	•	To maximize delivery profit
	•	To efficiently utilize vehicle capacity
	•	To optimize delivery routes using shortest path algorithms



🧠 Algorithms Used

🔹 1. Greedy Algorithm

The Greedy approach is used to prioritize delivery orders based on profit.
Orders with higher profit are selected first to ensure maximum revenue.



🔹 2. Dynamic Programming (0/1 Knapsack)

The Knapsack algorithm is used to assign selected orders to vehicles while respecting capacity constraints.
It ensures the best combination of orders is chosen to maximize profit.


🔹 3. Graph Algorithm (Dijkstra)

Dijkstra’s algorithm is used to calculate the shortest path between locations in the delivery network.
This helps in minimizing travel cost and time.

⚙️ Features
	•	Load delivery orders from a CSV file
	•	Display all available orders
	•	Optimize order selection using Greedy approach
	•	Assign orders to vehicles using Dynamic Programming
	•	Compute shortest delivery routes using Graph algorithms
	•	Menu-driven Text User Interface (TUI)


🏗️ System Design
	1.	Orders are loaded from orders.csv
	2.	Orders are sorted using Greedy strategy
	3.	Knapsack algorithm selects optimal set of orders
	4.	Graph is used to calculate shortest paths
	5.	Results are displayed through a menu-driven interface

🎯 Conclusion

This project successfully demonstrates how multiple algorithmic techniques such as Greedy, Dynamic Programming, and Graph algorithms can be integrated to solve a real-world logistics optimization problem.

It provides an efficient and scalable approach for delivery management systems.


📚 Future Improvements
	•	Add Graphical User Interface (GUI)
	•	Support multiple vehicles dynamically
	•	Integrate real-time data input
	•	Add route visualization



👨‍💻 Technology Used
	•	Language: C++
	•	Concepts: Data Structures & Algorithms
	•	Tools: VS Code, GitHub


   
