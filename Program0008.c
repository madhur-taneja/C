//Ques:
//WAP to Print a link list in reverse. (Hackerrank Data Structures)

//CODE:

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
