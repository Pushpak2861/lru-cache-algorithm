#include <iostream>
#include "include/nodeis.h"
#include "include/dll.h"


using namespace std;

int main(){

    dll lru;
    lru.insert(1,2);
    lru.insert(2,3);
    lru.insert(3,4);
    lru.insert(4,5);
    lru.get(2);

    return 0;
}