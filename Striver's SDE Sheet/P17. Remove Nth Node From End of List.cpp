ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *temp = head;
    int siz = 0;

    while (temp)
    {
        siz++;
        temp = temp->next;
    }

    if (siz == n)
        return head->next;

    int k = siz - n - 1;
    ListNode *temp2 = head;
    while (k > 0)
    {
        temp2 = temp2->next;
        k--;
    }

    temp2->next = temp2->next->next;

    return head;
}