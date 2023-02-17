#include <iostream>

using namespace std;

// Linked List Node class
class Node {
public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Stack class
class Stack {
private:
    Node* head;
    Node* tail;
    int size;

public:
    Stack() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    bool is_empty() {
        return head == nullptr;
    }

    void push(int value) {
        Node* new_node = new Node(value);
        if (is_empty()) {
            head = new_node;
            tail = new_node;
        } else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    int pop() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int value = tail->value;
        Node* prev_node = tail->prev;
        if (prev_node) {
            prev_node->next = nullptr;
            tail = prev_node;
        } else {
            head = nullptr;
            tail = nullptr;
        }
        size--;
        return value;
    }

    int peek() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return tail->value;
    }

    int get_size() {
        return size;
    }
};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << stack.pop() << endl; // Output: 3
    cout << stack.peek() << endl; // Output: 2
    cout << stack.get_size() << endl; // Output: 2
    return 0;
}
