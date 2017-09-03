//Ques:
//Remove Duplicates from Sorted ListBookmark Suggest Edit (InterviewBit)

//CODE:

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
