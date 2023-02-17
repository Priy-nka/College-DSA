#include <iostream>

using namespace std;

// Linked List Node class
class Node {
public:
    int value;
    Node* next;
    
    Node(int val) {
        value = val;
        next = nullptr;
    }
};

// Stack class
class Stack {
private:
    Node* head;
    int size;

public:
    Stack() {
        head = nullptr;
        size = 0;
    }

    bool is_empty() {
        return head == nullptr;
    }

    void push(int value) {
        Node* new_node = new Node(value);
        new_node->next = head;
        head = new_node;
        size++;
    }

    int pop() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int value = head->value;
        head = head->next;
        size--;
        return value;
    }

    int peek() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->value;
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
