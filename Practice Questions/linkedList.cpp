#include <iostream>
using namespace std;

/*
Types of Linked Lists

1. Singly Linked List

    (Head) node1 -> node2 -> node3 -> NULL

2. Doubly Linked List

    NULL -> node1 -> node2 -> node3 -> NULL

3. Circular Linked List

    (Head) node1 -> node2 -> node3 -\
        ^--------------------------|

Advantages of Linked List:

    - Inserting and deleting node is efficient because no need to shifting like in array.
    - Linked lists have dynamic size, which allows them to grow or shrink during runtime.
    - Memory is utilized more efficiently as linked lists do not require a pre-allocated size, reducing wasted space.
    - Efficient for those operations where we need large or frequently changing datasets.
    - Linked list used non-contiguous memory blocks, so it is useful for those application where memory is needed.

Limitations of Linked List

Despite its flexibility and dynamic nature, a linked list has some limitations:

    - No Direct Access: Elements cannot be accessed directly using an index. To reach a specific node, the list must be traversed from the beginning.
    - Additional Memory Requirement: Each node requires extra memory to store one or more pointer variables.
    - Sequential Searching: Searching for an element can be slower because nodes must be visited one by one.
    - Complex Implementation: Linked lists are generally more complex to implement and maintain compared to arrays.
*/

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

void sortList(Node *head)
{
    Node *current = head;

    while (current != NULL && current->next != NULL)
    {
        Node *miniNode = current;
        Node *search = current;

        while (search != NULL)
        {
            if(search->data < miniNode->data){
                miniNode = search;
            }
            search = search->next;
        }
        // swap
        swap(current->data, miniNode->data);

        current = current->next;
    }
}

int main()
{
    Node *head = new Node(4);

    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    traverseList(head);
    cout << endl;
    sortList(head);
    cout << endl;
    traverseList(head);

    return 0;
}