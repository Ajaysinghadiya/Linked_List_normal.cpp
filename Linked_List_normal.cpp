#include<iostream>
using namespace std;

class Linked_List// We are declaring a class named as linked list
{
    //And now we will declare another class for defining the node in the program
    class Node {
        // everything will be in the public section only
    public:
        int data;
        Node* next;
        //Declaring the cunstructor only in the public section
        Node(int d)
        {
            data = d;
            next = NULL;
        }
    };
        //Declaring the node type variable in the private section of the linked list named class
    Node* head ,*tail;// Head is for storing the address of the 1st node and the tail is for the last node
public:

    //The constructor is always defined in the public section only

    Linked_List()
    {
        head = NULL;
        tail = NULL;
    }
    // Inserting at the tail or you can say that add at the end
    void InsertAtTail(int value)
    {
        Node* newnode = new Node(value);// That new node is being created that you want to add
        if (head == NULL)// if there is no any node
        {
            //Then the head and tail will point to the same node if it is the 1st node
            head = newnode;
            tail = head ;
        }
        else//And if that node is not the 1st node then we can solve this question with the two way
        {
            // these two lines will make this programm of the only linear time complexy
            tail ->next = newnode;
            tail = tail->next;               

                                                        //these next will be of the time n order

            // Node* currentNode=head;
            // while(currentNode->next!=NULL)
            // currentNode=currentNode->next;
            // currentNode->next=newnode;
        }

    }
// displaying the linked list
    void display()
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }
};

int main()
{
    Linked_List ll;
    ll.InsertAtTail(10);
    ll.InsertAtTail(20);
    ll.InsertAtTail(50);
    ll.InsertAtTail(60);
    ll.InsertAtTail(70);
    ll.display();

    return 0;
}
