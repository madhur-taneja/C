//Ques:
//Reorder the given list in such a way that elements of list:L: L0 → L1 → … → Ln-1 → Ln  are arranged in this manner: L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → … .
// InterviewBit (Linked List->Reorder List)

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
 listnode* middle(listnode* A) {
    listnode* slow = A;
    listnode* fast = A;
    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
 }
 
 
listnode* reorderList(listnode* A) {
    
    int f = 0;
    listnode* mid = middle(A);
    listnode* prev = NULL;
    listnode* current = mid->next;
    listnode* next;
    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        //count++;
    }
    mid->next = prev;
    
    listnode* curr = NULL;
    mid = middle(A);
    listnode* head1 = A;
    listnode* head2 = mid->next;
    mid->next = NULL;
    
    curr = head1;
    listnode* t = curr;
    head1 = head1->next;
    
    while(head1 && head2) {
        if(f == 1) {
            curr->next = head1;
            head1 = head1->next;
            curr = curr->next;
            f = 0;
        }
        else {
            curr->next = head2;
            head2 = head2->next;
            curr = curr->next;
            f = 1;
        }
    }
    //printf("%d ", head1->val);
    if(head1 != NULL){
        //printf("hi");
        curr->next = head1;
    }
    if(head2 != NULL) {
        curr->next = head2;    
    }
    
    return t;
}
