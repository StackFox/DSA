#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int countSize(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insertionSort(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return;

    Node temp(0);
    Node *current = head;

    while (current != nullptr)
    {
        Node *after = current->next;
        Node *prev = &temp;

        while (prev->next != nullptr && prev->next->data < current->data)
        {

            prev = prev->next;
        }

        current->next = prev->next;
        prev->next = current;

        current = after;
    }
}

void traverseList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data;

        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }
}

int main()
{
    Node *head = new Node(1);

    head->next = new Node(4);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);

    traverseList(head);
    cout << endl;
    insertionSort(head);
    cout << endl;
    traverseList(head);

    return 0;
}