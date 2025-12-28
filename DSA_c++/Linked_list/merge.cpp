#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to merge two sorted linked lists
Node* mergeLists(Node* head1, Node* head2) {
    if (!head1) return head2; // If the first list is empty
    if (!head2) return head1; // If the second list is empty

    Node* mergedHead = nullptr;

    // Determine the head of the merged list
    if (head1->data <= head2->data) {
        mergedHead = head1;
        head1 = head1->next;
    } else {
        mergedHead = head2;
        head2 = head2->next;
    }

    Node* current = mergedHead;

    // Merge the two lists
    while (head1 && head2) {
        if (head1->data <= head2->data) {
            current->next = head1;
            head1 = head1->next;
        } else {
            current->next = head2;
            head2 = head2->next;
        }
        current = current->next;
    }

    // Attach the remaining nodes
    if (head1) {
        current->next = head1;
    } else {
        current->next = head2;
    }

    return mergedHead;
}

// Function to print a linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    // Create first linked list: 1 -> 3 -> 5
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);

    // Create second linked list: 2 -> 4 -> 6
    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    // Merge the two lists
    Node* mergedHead = mergeLists(head1, head2);

    cout << "Merged List: ";
    printList(mergedHead);

    return 0;
}