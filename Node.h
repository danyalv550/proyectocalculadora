#pragma once

template<typename T>

class Node{
private:
    T value;
    Node* right;
    Node* left;

public:
    Node(T newValue){
        value=newValue;
        right=nullptr;
        left=nullptr;
    }

};
