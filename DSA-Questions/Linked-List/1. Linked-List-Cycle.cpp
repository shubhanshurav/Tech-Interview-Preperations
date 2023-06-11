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

............................................................................................................
Intuition: Using Unordered Map
.............................................................................................................

Approach:)

1. Create a boolean type unordered map.
2. Iterate over the Linked List
    (a). Check if node is present in map or not using count() function
    if present than return true
    (b). map = true; // means cycle is find
    (c). head = head -> next
3. Return false

.............................................................................................................
Complexity:)
.............................................................................................................

1. Time complexity: O(N)
2. Space complexity: O(N)

.............................................................................................................

*/

class Solution {
public:
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*, bool> cycleDetect;
        while(head!=NULL){

            if(cycleDetect.count(head)) return true;
            
            cycleDetect[head] = true;
            head = head -> next;
        }   
        return false;
    }
};


