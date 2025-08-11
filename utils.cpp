#include "dll.h"


using namespace std;


Node::Node(int key , int val){
    this->key = key;
    this->val = val;
}

dll::dll(){
    head = new Node(-1,-1);
    tail = new Node(-1,-1);
    head->next = tail;
    head->prev = nullptr;
    tail->next = nullptr;
    tail->prev = head;
}

void dll::insert(int key , int val){

    if(omap.find(key)!=omap.end()){
        Node* curr = omap[key];
        curr->val = val;
        unlink(curr);
        relinkToFront(curr);
        return;

    }
    else{

        if(omap.size() == capacity){

            Node* curr = tail->prev;
            omap.erase(curr->key);
            curr->key = key;
            curr->val = val;
            unlink(curr);
            relinkToFront(curr);
            omap[key] = curr;

        }
        else{
            Node* curr = new Node(key , val);
            relinkToFront(curr);
            omap[key] = curr;
        }

    }
    
}

int dll::get(int key){

    if(omap.find(key) == omap.end()){
        cout<<"No such keys are present"<<endl;
        return 0;
    }
    Node* curr = omap[key];
    unlink(curr);
    relinkToFront(curr);
    cout<<curr->val<<endl;
    return curr->val;


}

void dll::unlink(Node* curr){

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

}

void dll::relinkToFront(Node* curr){
    curr->next = head->next;
    curr->prev = head;
    head->next->prev = curr;
    head->next = curr;

};