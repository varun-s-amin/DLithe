#include <iostream>
using namespace std;

typedef struct node_t{
    float data;
    struct node_t* next;
} node;

node_t* createNode(float item) {
    node_t* rE = (node_t*)malloc(
            sizeof(node_t));//
    rE->data = item;
    rE->next = NULL;
    return rE;
}
//traversal used recursion | travel and visit/print | backtracking 
//to print reverse of the list 
void doTraversal(node_t* rE) {
    if(rE == NULL) {
        return;
    }
   doTraversal(rE->next);
   cout << rE->data << endl;
}

int main()
{
    //20.0f, 15.0f, 35.0f, 40.0f, 25.0f    
    node_t* head = createNode(20.0f);
    head->next = createNode(15.0f);
    head->next->next = createNode(35.0f);
    head->next->next->next = createNode(40.0f);
    head->next->next->next->next = createNode(25.0f);

    doTraversal(head);
    return 0;
}