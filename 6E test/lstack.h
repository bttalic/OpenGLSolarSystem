//lstack class created, it will be called from main.
#include <iostream>

using namespace std;

class lstack {

private:
    node* top;

public:

    //in the beginning its empty.
    lstack() {
        top = NULL;
    }

    //once the loop in main executes, this pushing method will run.
    //the method will put them in a stack.
    void push(int n) {
        node *tmp;
        tmp = new node;
        if (tmp == NULL)
            cout << "\nStack full, going back....";

        tmp->data = n;
        tmp->link = top;
        top = tmp;
    }

    //this method will pop off from the stack
    int pop() {
        if (top == NULL) {
            cout << "\nEmpty stack";
            return NULL;
        }
        node *tmp;
        int n;
        tmp = top;
        n = tmp->data;
        top = top->link;
        delete tmp;
        return n;
    }

    //bitwise not of lstack, so this method will examine bit by bit
    ~lstack() {
        if (top == NULL)
            return;

        node *tmp;
        while (top != NULL) {
            tmp = top;
            top = top->link;
            delete tmp;
        }
    }
};


/*
 * 
 */

struct mazeCell {
    bool top;
    bool bottom;
    bool passed;

};

struct node {
    int data;
    node *link;
};