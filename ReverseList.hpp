#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        
        LinkedList rev;

        if (head == nullptr){
            return rev;
        }

        if (head->next == nullptr){
            rev.addHead(head->data);
            return rev;
        }

        Node* currentNode = head;
        while (currentNode->next != nullptr){
            rev.addHead(currentNode->data);
            currentNode = currentNode->next;
        }

        return rev;
    }

    Node* head = nullptr;
};
