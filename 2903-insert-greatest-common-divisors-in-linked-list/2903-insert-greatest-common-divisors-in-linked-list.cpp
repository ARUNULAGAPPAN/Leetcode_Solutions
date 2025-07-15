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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
     if(!head ||! head->next )  return head;

     ListNode* n1 = head;
     ListNode* n2 = head->next;

     while(n2 != nullptr)
     {
        int gdc = calc(n1->val, n2->val);
        ListNode* g = new ListNode(gdc);

        n1->next = g;
        g->next = n2;
        
        n1=n2;
        n2=n2->next;
     }  
     return head;
    }
    int calc(int a, int b)
    {
        if(b==0) return a;
        return calc(b, a%b);
    }
};