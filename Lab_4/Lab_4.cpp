#include <iostream>
#include <initializer_list>

class StackBasedOnUnidirectionalCyclicLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* head;
    unsigned size;

public:
    // Конструкторы и деструктор
    StackBasedOnUnidirectionalCyclicLinkedList() : head(nullptr), size(0) {}

    // Конструктор копирования
    StackBasedOnUnidirectionalCyclicLinkedList(const StackBasedOnUnidirectionalCyclicLinkedList& other) : head(nullptr), size(0) {
        Node* temp = other.head;
        while (temp) {
            Push(temp->data);
            temp = temp->next;
        }
    }

    // Конструктор перемещения
    StackBasedOnUnidirectionalCyclicLinkedList(StackBasedOnUnidirectionalCyclicLinkedList&& other) noexcept : head(other.head), size(other.size) {
        other.head = nullptr;
        other.size = 0;
    }

    // Конструктор, принимающий на вход std::initializer_list
    StackBasedOnUnidirectionalCyclicLinkedList(std::initializer_list<int> ilist) : head(nullptr), size(0) {
        for (const auto& value : ilist) {
            Push(value);
        }
    }

    // Деструктор
    ~StackBasedOnUnidirectionalCyclicLinkedList() {
        while (head) {
            Node* temp = head->next;
            delete head;
            head = temp;
        }
    }

    // Функции-члены
    unsigned GetSize() const {
        return size;
    }

    bool Push(const int& value) {
        Node* newNode = new Node(value);
        if (!newNode) return false;

        if (!head) {
            head = newNode;
            head->next = head;  // делаем список циклическим
        }
        else {
            newNode->next = head->next;
            head->next = newNode;
        }
        size++;
        return true;
    }

    bool Pop(int& value) {
        if (!head) return false;

        Node* temp = head->next;
        value = temp->data;

        if (temp == head) {
            delete temp;
            head = nullptr;
        }
        else {
            head->next = temp->next;
            delete temp;
        }
        size--;
        return true;
    }

    bool Peek(int& value) const {
        if (!head) return false;
        value = head->next->data;
        return true;
    }

    // Перегруженные операции
    StackBasedOnUnidirectionalCyclicLinkedList& operator=(const StackBasedOnUnidirectionalCyclicLinkedList& other) {
        if (this == &other) return *this;
        while (head) {
            Node* temp = head->next;
            delete head;
            head = temp;
        }
        size = 0;
        Node* temp = other.head;
        while (temp) {
            Push(temp->data);
            temp = temp->next;
        }
        return *this;
    }

    StackBasedOnUnidirectionalCyclicLinkedList& operator=(StackBasedOnUnidirectionalCyclicLinkedList&& other) noexcept {
        if (this == &other) return *this;
        while (head) {
            Node* temp = head->next;
            delete head;
            head = temp;
        }
        size = 0;
        head = other.head;
        size = other.size;
        other.head = nullptr;
        other.size = 0;
        return *this;
    }

    StackBasedOnUnidirectionalCyclicLinkedList& operator=(std::initializer_list<int> ilist) {
        while (head) {
            Node* temp = head->next;
            delete head;
            head = temp;
        }
        size = 0;
        for (const auto& value : ilist) {
            Push(value);
        }
        return *this;
    }
};

int main() {
    StackBasedOnUnidirectionalCyclicLinkedList stack = { 1, 2, 3 };
    std::cout << "Stack size: " << stack.GetSize() << std::endl;

    int value;
    if (stack.Pop(value)) {
        std::cout << "Popped value: " << value << std::endl;
    }

    stack.Push(4);
    if (stack.Peek(value)) {
        std::cout << "Peeked value: " << value << std::endl;
    }

    return 0;
}