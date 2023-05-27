#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *create(int item)
{
    Node *node = new Node;
    node->data = item;
    node->left = node->right = NULL;
    return node;
}
/*Inorder traversal of the tree formed*/
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);         // traverse left subtree
    cout << root->data << "   "; // traverse root node
    inorder(root->right);        // traverse right subtree
}
Node *insertion(Node *root, int item) /*Insert a node*/
{
    if (root == NULL)
        return create(item); /*return new node if tree is empty*/
    if (item < root->data)
        root->left = insertion(root->left, item);
    else
        root->right = insertion(root->right, item);
    return root;
}
void search(Node *cur, int item)
{
    Node *parent = NULL;
    if (cur == NULL)
    {
        cout << "Given element not found \n";
        return;
    }
    while (cur != NULL && cur->data != item)
    {
        parent = cur;
        if (item < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
    cout << "Parent of given child \n";
    if (parent != NULL)
        cout << parent->data << endl;
    else
        cout << "No parent \n";

    cout << "The children of the given element are : \n";
    if (cur->left != NULL)
        cout << cur->left->data << endl;
    else
        cout << "No left child \n";

    if (cur->right != NULL)
        cout << cur->right->data << endl;
    else
        cout << "No right child \n";
}
int main()
{
    Node *root = NULL;
    Node *cur = NULL;
    Node *parent = NULL;
    int choice, data;
    cout << "1)insert into the bst \n";
    cout << "3)Search \n";
    cout << "3)Inorder display \n";
    cout << "4)Exit \n";
    do
    {
        cout << "Enter your choice \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element \n";
            cin >> data;
            root = insertion(root, data);
            break;
        case 2:
            cout << "Enter the element to search \n";
            cin >> data;
            search(root, data);
            break;
        case 3:
            inorder(root);
            cout << endl;
            break;
        case 4:
            break;
        default:
            cout << "Enter a valid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
