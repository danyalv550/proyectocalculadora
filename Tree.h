#pragma once
#include "Node.h"

template<typename T>

class Tree{
private:
    Node<T>* root;

public:
    Tree(){
        root=nullptr
    };
    template<typename T1>;
    void addNode(string position, T1 newValue){
        Node* newNode = new Node<T1>(newValue);
        if(root == nullptr){
            root = newNode;
        }
        else{
            if (root == "Right")
            {
                root->right = newNode;
            }
            if (root == "Left")
            {
                root->Left = newNode;
            }
        } 
    }

    void deleteNode(){
        delete root;
    }

    template<typename T2>;
    void modifyNode(T2 newValue){
        root->value = newValue;
    }
};