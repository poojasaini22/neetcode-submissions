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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int count=0;
        int num= getcount(head);
        if(num==n){

        return head->next;
        }
        else{
        while(count!=(num-n-1)){
            curr=curr->next;
            count++;
        }

        ListNode* remove=curr->next;
        curr->next=curr->next->next;
        delete(remove);

        return head;
        }
   

    }
    int getcount(ListNode* head){
        ListNode* curr=head;
        int count=1;
        if(!head){
            return 0;
        }
        while(curr->next!=nullptr){
            count++;
            curr=curr->next;
        }
        return count;
    }
};
