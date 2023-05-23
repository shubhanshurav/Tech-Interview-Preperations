class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        vector<int> arr;
        for(ListNode* curr = head; curr!=NULL; curr = curr->next){
            arr.push_back(curr->val);
        }
        for(ListNode* curr = head; curr!=NULL; curr = curr->next){
            curr->val = arr.back();
            arr.pop_back();
        }
        return head;
    }  

};