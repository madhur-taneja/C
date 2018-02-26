//Ques:
//Given a sorted linked list, delete all duplicates such that each element appear only once.
//For example,
//Given 1->1->2, return 1->2.
//Given 1->1->2->3->3, return 1->2->3.
//InterviewBit (Linked List->Remove Duplicates from Sorted List)

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
listnode* deleteDuplicates(listnode* A) {
    listnode* head = A;
    
    while(head->next != NULL) {
        if(head->val == head->next->val) {
            head->next = head->next->next;
        }
        else {
            head = head->next;
        }
    }
    return A;
}
