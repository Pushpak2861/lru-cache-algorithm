#ifndef DOUBLE_H
#define DOUBLE_H



#include <iostream>
#include "nodeis.h"
#include <unordered_map>


class dll{

    public:
        unordered_map<int , Node*> omap;
        int capacity = 4;
        Node* head;
        Node* tail;
        dll();
        void insert(int key , int val);
        int get(int key);
        void unlink(Node* curr);
        void relinkToFront(Node*curr);

};
#endif