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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p = head ? head->next : nullptr;
        ListNode* q = head ? head : nullptr;
        while(p!=nullptr){
            if(p->val != q->val){
                q = p;
                p=p->next;
            }else{
                q->next = p->next;
                p = p->next;
            }
        }
        return head;
    }
};