#include<iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* tail = dummyNode;
        int carry = 0;
        while(l1 !=nullptr || l2 != nullptr || carry != 0){
            int a = (l1 != nullptr) ? l1->val : 0;
            int b = (l2 != nullptr) ? l2->val : 0;

            int sum = a + b + carry;
            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            l1 = (l1!=nullptr) ? l1->next : nullptr;
            l2 = (l2!=nullptr) ? l2->next : nullptr;
        }
        ListNode* result = dummyNode->next;
        delete dummyNode;
        return result;
    }
};