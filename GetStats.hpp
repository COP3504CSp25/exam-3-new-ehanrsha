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

    int* getStats() const{
        int* newArray = new int[3];
        
        int min = 0;
        int max = 0;
        int mean = 0;
        int count = 0;

        if (head == nullptr){
            newArray[0] = min;
            newArray[1] = max;
            newArray[2] = mean;

            return newArray;
        }

        Node* currentNode = head;
        min = currentNode->data;
        max = currentNode->data;
        while(currentNode != nullptr){
            if (currentNode->data < min){
                min = currentNode->data;
            }
            if (currentNode->data > max){
                max = currentNode->data;
            }
            mean += currentNode->data;
            count++;
        }

        mean = mean / count ;

        newArray[0] = min;
        newArray[1] = max;
        newArray[2] = mean;

        return newArray;
    }
    

private:
    Node* head = nullptr;
};
