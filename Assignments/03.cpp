#include <iostream>
#include <stack>

class Stack {
private:
    std::stack<int> data;

public:
    // Function to push an element onto the stack
    void push(int value) {
        data.push(value);
    }

    // Function to pop an element from the stack
    void pop() {
        if (!data.empty()) {
            data.pop();
        } else {
            std::cout << "Stack is empty. Cannot pop.\n";
        }
    }

    // Function to display the top element of the stack
    void top() const {
        if (!data.empty()) {
            std::cout << "Top element: " << data.top() << "\n";
        } else {
            std::cout << "Stack is empty.\n";
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return data.empty();
    }

    // Function to display the entire stack
    void display() const {
        if (!data.empty()) {
            std::cout << "Stack elements: ";
            std::stack<int> temp = data;
            while (!temp.empty()) {
                std::cout << temp.top() << " ";
                temp.pop();
            }
            std::cout << "\n";
        } else {
            std::cout << "Stack is empty.\n";
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        std::cout << "\nStack Operations:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Display Top\n";
        std::cout << "4. Display Stack\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.top();
                break;
            case 4:
                stack.display();
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
