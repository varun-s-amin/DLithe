#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createNode(int item) {
    ListNode* rE = new ListNode(item);
    return rE;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int d1=0, d2=0, carry=0;
    ListNode* output = nullptr;
    ListNode* output_tail = nullptr;

    ListNode* rE1 = l1;
    ListNode* rE2 = l2;
    while(rE1 != nullptr || rE2 != nullptr || carry != 0) {
        d1 = 0;
        d2 = 0;
        if(rE1 != nullptr) {
            d1 = rE1->val;
            rE1 = rE1->next;
        }
        if(rE2 != nullptr) {
            d2 = rE2->val;
            rE2 = rE2->next;
        }
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        ListNode* oE = createNode(sum);
        if(output_tail == nullptr) {
            output_tail = oE;
            output = oE;
        } else {
            output_tail->next = oE;
            output_tail = oE;
        }
    }
    return output;
}

int main() {
    // Example usage
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

    // Output the result
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
