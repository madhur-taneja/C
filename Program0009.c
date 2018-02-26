//Ques:
//You are given the pointer to the head node of a linked list and you need to print all its elements in reverse order from tail to head,
//one element per line. The head pointer may be null meaning that the list is empty - in that case, do not print anything! 
//Hackerrank (Data Structures->Linked List->Print in Reverse)

//CODE:

/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    //Node* nn = new Node();
    if(head == NULL)
    {
        return;
    }
    else
    {
        ReversePrint(head->next);
        cout << head->data << endl;
    }
}
