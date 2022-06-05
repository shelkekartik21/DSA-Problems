ListNode *rotateRight(ListNode *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *temp = head;
    int len = 1;

    while (temp->next != NULL)
    {
        temp = temp->next;
        len++;
    }

    temp->next = head;

    k = k % len;
    int t = len - k;

    while (t > 0)
    {
        temp = temp->next;
        t--;
    }

    head = temp->next;
    temp->next = NULL;

    return head;
}