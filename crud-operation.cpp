#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(T data) {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void remove(T data) {
        if (head == nullptr) return;

        if (head->data == data) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node<T>* temp = head;
        while (temp->next != nullptr) {
            if (temp->next->data == data) {
                Node<T>* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
                return;
            }
            temp = temp->next;
        }
    }

    Node<T>* search(T data) {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data == data) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }

    void display() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList<int> intList;
    intList.insert(5);
    intList.insert(10);
    intList.insert(15);
    intList.display();

    intList.remove(10);
    intList.display();

    Node<int>* searchResult = intList.search(15);
    if (searchResult != nullptr) {
        std::cout << "Found: " << searchResult->data << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    LinkedList<char> charList;
    charList.insert('A');
    charList.insert('B');
    charList.insert('C');
    charList.display();

    return 0;
}
