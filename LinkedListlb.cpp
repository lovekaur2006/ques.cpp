// // Singly Linked List

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // traversing of node
// void TraverseLinkedList(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "List is empty" << endl;
//         return;
//     }
//     // Start from the head of the linked list
//     Node *current = head;

//     // Traversing the linked list until reaching the end
//     while (current != NULL)
//     {
//         // Printing data of the linked list
//         cout << current->data << endl;
//         // firstly you were at the left part of the linked list
//         //  which gives you data but now you mone on to the right part
//         //   of the linked lst i.e. next . As next part contains the address
//         //   of the next node, so you move on to the next node
//         current = current->next;
//     }
//     cout << endl;
// }

// void insertAtHead(Node *&head, int data)
// {
//     // new node create which is to be inserted before the head
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node *&tail, int data)
// {
//     Node *temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }

// void insertAtPosition(Node *&tail, Node *&head, int position, int data)
// {
//     // Insert at head
//     if (position == 1)
//     {
//         insertAtHead(head, data);
//         return;
//     }
//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     // Insert at tail
//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, data);
//         return;
//     }

//     // creating a new node with data
//     Node *nodeToInsert = new Node(data);
//     nodeToInsert->next = temp->next; // Firstly we linked the address of new node which is to be insert to the next node
//     temp->next = nodeToInsert;       // Now you have linked the previous linked list address to the node to Insert
// }

// // Deleting the node by position
// void deletingNode(Node *&head, int position)
// {
//     // deleting first node
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = head->next; // making the second node as the head or the first node

//         // memory free start node
//         temp->next = NULL;//Ab head toh second node bn gyi h toh bdlav temp yani first node pr hoga
//         delete temp;
//     }
//     else
//     {
//         // deleting the middle node or the last node
//         Node *curr = head;
//         Node *prev = NULL;

//         int cnt = 1;
//         while (cnt < position)
//         {
//             prev = curr;       // aage bdhte jao mtlb previous ko curr bnate rho
//             curr = curr->next; // or current ko bhi aage ke addresss pr bhejte rho
//             cnt++;
//             // yaha pe ab current vaha pahuch jayega jo node delete krna h or prev osse ek node piche
//         }
//         prev->next = curr->next; // ab prev ke next or curr ke next pr same values pdi hongi toh curr->next ko null point kra do
//         curr->next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     // cout << node1->data << endl;
//     // cout << node1->next << endl;

//     Node *node2 = new Node(20);
//     // Traversal
//     // Initialize the head as the addresss of the node 1
//     Node *head = node2;
//     insertAtHead(head, 30);
//     // TraverseLinkedList(head);

//     Node *tail = node2;
//     insertAtTail(tail, 40);
//     // TraverseLinkedList(head);

//     insertAtPosition(tail, head, 2, 50);
//     TraverseLinkedList(head);

//     deletingNode(head, 2);
//     TraverseLinkedList(head);
//     return 0;
// }

// // DOUBLY LINKED LIST
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->prev = NULL;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         int val = this->data;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "Memory free for node with data" << endl;
//     }
// };

// void print(Node *&head)
// {
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int getLength(Node *&head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }

// void insertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     head->prev = temp; // 1
//     temp->next = head; // 2
//     // 1 and 2 can be performed as vice-versa
//     head = temp;
// }
// void insertAtTail(Node *&tail, int data)
// {
//     Node *temp = new Node(data);
//     tail->next = temp;
//     temp->prev = tail;
//     tail = temp;
// }

// void insertAtPosition(Node *&head, Node *&tail, int position, int data)
// {

//     if (position == 1)
//     {
//         insertAtHead(head, data);
//         return;
//     }
//     Node *temp = head;
//     int cnt = 1;
//     while (cnt < position - 1)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, data);
//         return;
//     }
//     Node *nodeToInsert = new Node(data);
//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

// void deletingNode(Node *&head, int position)
// {
//     // deleting first node
//     if (position == 1)
//     {
//         Node *temp = head;
//         temp->next->prev = NULL;
//         head = temp->next;

//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *preceeding = NULL;
//         int cnt = 1;
//         while (cnt < position)
//         {
//             preceeding = curr;
//             curr = curr->next;
//             cnt++;
//         }
//         curr->prev = NULL;
//         preceeding->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;

//     // print(head);

//     // cout << getLength(head);

//     insertAtHead(head, 6);
//     // print(head);

//     Node *tail = node1;
//     insertAtTail(tail, 45);
//     // print(head);

//     // insertAtPosition(head, tail, 2, 20);
//     print(head);

//     deletingNode(head, 3);
//     print(head);
//     return 0;
// }

// // Circular Linked list
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         int value = this->data;
//         if (this->next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "Memory is free for node with data " << value << endl;
//     }
// };

// void insertNode(Node *&tail, int element, int data)
// {
//     // empty list
//     if (tail == NULL)
//     {
//         Node *newNode = new Node(data);
//         tail = newNode;
//         newNode->next = newNode;
//     }
//     else
//     {
//         // non-empty list
//         // assuming the element is present in the list

//         Node *curr = tail;
//         while (curr->data != element)
//         {
//             curr = curr->next;
//         }
//         // element found ->curr is representing eleemnt wala node
//         Node *temp = new Node(data);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }

// void print(Node *&tail)
// {
//     Node *temp = tail;
//     if (tail == NULL)
//     {
//         cout << "List is empty" << endl;
//     }
//     do
//     {
//         cout << tail->data << " ";
//         tail = tail->next;
//     } while (tail != temp);
//     cout << endl;
// }

// void deleteNode(Node *&tail, int value)
// {
//     // empty list
//     if (tail == NULL)
//     {
//         cout << "List is empty" << endl;
//         return;
//     }
//     else
//     {
//         // non-empty

//         // assuming the value is present in the linked list
//         Node *prev = tail;
//         Node *curr = prev->next;
//         while (curr->data != value)
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         // 1 Node Linked list
//         if (curr == prev)
//         {
//             tail = NULL;
//         }
//         // 2 Node Linked List
//         else if (tail == curr)
//         {
//             tail = prev;
//         }
//         curr->next = NULL;
//         delete curr;
//     }
// }

// int main()
// {
//     Node *tail = NULL;
//     insertNode(tail, 10, 3);
//     print(tail);
//     insertNode(tail, 3, 20);
//     print(tail);
//     deleteNode(tail, 3);
//     print(tail);
//     return 0;
// }

// // REVERSE A LINKED LIST
// // ITERATIVE APPROACH
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// // reverse a list
// Node *ReverseList(Node *&head)
// {
//     // Three pointer approach
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward;

//     while (curr != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
// void InsertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;

//     InsertAtHead(head, 20);

//     InsertAtHead(head, 30);
//     print(head);
//     head = ReverseList(head);
//     print(head);
//     return 0;
// }
// // RECURSIVE APPROACH

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void InsertatHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void reverseList(Node *&head, Node *&prev, Node *&curr)
// {
//     if (curr == NULL)
//     {
//         head = prev;
//         return;
//     }
//     Node *forward = curr->next;
//     reverseList(head, curr, forward);
//     curr->next = prev;
// }
// Node *reverse(Node *head)
// {
//     Node *curr = head;
//     Node *prev = NULL;
//     reverseList(head, prev, curr);
//     return head;
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     InsertatHead(head, 20);
//     InsertatHead(head, 30);
//     print(head);
//     head = reverse(head);
//     print(head);

//     return 0;
// }

// // 2nd recursive approach
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// void InsertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// Node *reverseList(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//     {
//         return head;
//     }
//     // reverse the rest of linked list and put the first element at the end
//     Node *rest = reverseList(head->next);

//     // Make the current as head as last node of remaining linked list
//     head->next->next = head;

//     head->next = NULL;
//     return rest;
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     InsertAtHead(head, 20);
//     InsertAtHead(head, 30);
//     print(head);
//     head = reverseList(head);
//     print(head);
//     return 0;
// }

// // Find Middle of the linked list
// //Approach 1
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertatHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// int getLength(Node *head)
// {

//     int cnt = 0;
//     while (head != NULL)
//     {
//          cnt++;
//         head = head->next;

//     }
//     return cnt;
// }
// int Middle(Node *head)
// {
//     int len = getLength(head);
//     int mid = (len / 2);
//     Node *temp = head;
//     int cnt = 0;
//     while (cnt <mid)
//     {
//         temp = temp->next;
//         cnt++;
//     }
//     return temp->data;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     // print(head);
//     InsertatHead(head, 20);
//     InsertatHead(head, 30);
//     InsertatHead(head, 50);
//     print(head);

//     cout << Middle(head) << endl;
//     return 0;
// }

// // Approach 2
// // Hare and Tortuise approach
// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void InsertAtHead(Node *&head, int data)
// {
//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int middle(Node *&head)
// {
//     Node *slow_ptr = head;
//     Node *fast_ptr = head;
//     while (fast_ptr != NULL && fast_ptr->next != NULL)
//     {
//         slow_ptr = slow_ptr->next;
//         fast_ptr = fast_ptr->next->next;
//     }
//     return slow_ptr->data;
// }

// int main()
// {
//     Node *node1 = new Node(40);
//     Node *head = node1;
//      InsertAtHead(head, 30);
//     InsertAtHead(head, 20);
//     InsertAtHead(head, 10);
//     print(head);
//     cout << middle(head) << endl;

//     return 0;
// }