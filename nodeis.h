#ifndef NODE_H
#define NODE_H


#include<iostream>

using namespace std;


class Node{
    public:
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int key , int val);
};

#endif