/*
-------------------------------------------------------------------------------------------------------------------------------------------------------
Problem Name : Merge k Sorted Lists (Hard)
-------------------------------------------------------------------------------------------------------------------------------------------------------

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

-------------------------------------------------------------------------------------------------------------------------------------------------------
Example 1:
-------------------------------------------------------------------------------------------------------------------------------------------------------

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6

-------------------------------------------------------------------------------------------------------------------------------------------------------
Example 2:
-------------------------------------------------------------------------------------------------------------------------------------------------------

Input: lists = []
Output: []
Example 3:

Input: lists = [[]]
Output: []

-------------------------------------------------------------------------------------------------------------------------------------------------------
Constraints:
-------------------------------------------------------------------------------------------------------------------------------------------------------

k == lists.length
0 <= k <= 104
0 <= lists[i].length <= 500
-104 <= lists[i][j] <= 104
lists[i] is sorted in ascending order.
The sum of lists[i].length will not exceed 104.

-------------------------------------------------------------------------------------------------------------------------------------------------------
1. Time Complexity: O(N*logK)
2. Space Complexity:O(K)
-------------------------------------------------------------------------------------------------------------------------------------------------------

*/

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

/*-------------------------------------------------------------------------------------------------------------------------------------------------------
                  Solution Using MinHeap(Priority Queue)
-------------------------------------------------------------------------------------------------------------------------------------------------------*/

class Solution {
public:
    
    struct valueCompare {
         bool operator()(ListNode *a, ListNode *b) { 
             return a->val > b->val; 
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode *, vector<ListNode *>, valueCompare> minHeap;

    // Push the head nodes of all
    // the k lists in 'minHeap'
    for (int i=0; i<lists.size(); i++) {
      if (lists[i] != NULL) {
        minHeap.push(lists[i]);
      }
    }

    // take the smallest (top) element form the min-heap and add it to the result;
    // if the top element has a next element add it to the heap
    ListNode *resultHead = NULL;
    ListNode *resultTail = NULL;

    // Loop till 'minHeap' is not empty
    while (!minHeap.empty()) {
      // Get the top element of 'minHeap'
      ListNode *curr = minHeap.top();
      minHeap.pop();
      if (resultHead == NULL) {
        resultHead = resultTail = curr;
      } else {
        resultTail->next = curr;
        resultTail = curr;
      }
      if (curr->next != NULL) {
        minHeap.push(curr->next);
      }
    }

    return resultHead;
    }
};