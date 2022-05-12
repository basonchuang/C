#include <stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

// 新節點放在第一個位置
void push(struct ListNode **head_ref, int new_val)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = new_val;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// 插入在中間節點
void insertAfter(struct ListNode *prev_node, int new_val)
{
    if (prev_node == NULL)
    {
        printf("prev_node 不得為 NULL");
        return;
    }

    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = new_val;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// 新節點放在最後一個位置
void append(struct ListNode **head_ref, int new_val)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *last_node = *head_ref;
    new_node->val = new_val;
    new_node->next = NULL;

    // 如果 Linked List 是存在，則建立一個
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    // 找尋目前最後一個節點
    while (last_node->next != NULL)
    {
        last_node = last_node->next;
    }

    last_node->next = new_node;
    return;
}

// 刪除節點
void deleteNode(struct ListNode **head_ref, int target_val)
{
    struct ListNode *temp = *head_ref, *prev_node;

    // 刪除第一個節點
    if (temp != NULL && temp->val == target_val)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // 找尋目標節點
    while (temp != NULL && temp->val != target_val)
    {
        prev_node = temp;
        temp = temp->next;
    }

    // 沒找到目標節點
    if (temp == NULL)
    {
        return;
    }

    // 找到目標節點，將其移除
    prev_node->next = temp->next;

    free(temp);
}
