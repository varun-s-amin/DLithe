#include <iostream>
using namespace std;

typedef struct node_t {
    float data;
    struct node_t* next;
} node;

node* createNode(float item) {
    node* rE = (node*)malloc(sizeof(node));
    rE->data = item;
    rE->next = NULL;
    return rE;
}

void doTraversal(node* head) {
    node* rE = head;
    while(rE != NULL) {
        cout << rE->data;
        rE = rE->next;
    }
}

int main() {
    node_t* head = createNode(20.0f);
    head->next = createNode(15.0f);
    head->next->next = createNode(35.0f);
    head->next->next->next = createNode(40.0f);
    head->next->next->next->next = createNode(25.0f);

    doTraversal(head);
    return 0;
}

