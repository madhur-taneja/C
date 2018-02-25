//Ques:
//Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
//Try solving it using constant additional space.
//Input : 
//                  ______
//                 |     |
//                 \/    |
//        1 -> 2 -> 3 -> 4
//Return the node corresponding to node 3.
//InterviewBit (Linked List->List Cycle)

//CODE:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* detectCycle(listnode* A) {
    
    int flag = 0, total = 0, count = 1;
    listnode* slow = A;
    listnode* fast = A;
    
    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        total += 2;
        if(slow == fast) {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0) return NULL;
    
    fast = A;
    while(fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }
    
    if(flag == 1) return fast;
}
