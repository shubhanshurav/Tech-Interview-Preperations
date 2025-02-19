/*
.............................................................................................................
Problem Name: Linked List Cycle
.............................................................................................................

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false. 

Example 1:

Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
Example 2:

Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.

.............................................................................................................
 Intuition: Using Two Pointers Approach(Floyd's Cycle Detection Algo)
.............................................................................................................

Approach:)
 
1. Slow = head, fast = head
2. Iterate While (fast != Null && fast->next != Null)
    slow -> 1 step aage badao
    fast -> 2 steps aage badao
   (a). if slow == fast // means cycle exists
        return true;
3. Return false    //cycle does'nt exists

.............................................................................................................
Complexity
 .............................................................................................................

- Time complexity: O(N)
- Space complexity: O(1)

*/


class Solution {
public:
    bool hasCycle(ListNode *head) {

        //start both pointer from same head node 
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!=NULL and fast->next != NULL){
            slow = slow -> next; // slow -> 1 step move krega
            fast = fast -> next -> next; // fast -> 2 step move krega

            //if cycle exists then return true
            if(slow == fast) return true;
        }
   
       return false;  //cycle does not exist   
    }
};