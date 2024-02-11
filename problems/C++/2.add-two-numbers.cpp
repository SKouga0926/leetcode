/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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

        int digit_sum = 0;
        int carry = 0;

        ListNode head;
        ListNode* temp = &head;
        
        while (l1 || l2) {

            digit_sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            
            carry = digit_sum / 10;

            temp->next = new ListNode(digit_sum % 10);
            temp = temp->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }


        if (carry > 0) {
            temp->next = new ListNode(carry);
        }

        return head.next;
    }
};
// @lc code=end

