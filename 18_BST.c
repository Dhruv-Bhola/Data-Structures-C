#include <stdio.h>
#include <stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d -> ", root->key);
        inorder(root->right);
    }
}

struct node *insert(struct node *node, int key)
{
    if (node == NULL)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->key = key;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else
    {
        node->right = insert(node->right, key);
    }
    return node;
}

struct node *minValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct node *maxValueNode(struct node *node)
{
    struct node *current = node;
    while (current && current->right != NULL)
    {
        current = current->right;
    }
    return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("Empty Tree");
        return root;
    }

    if (key < root->key)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = deleteNode(root->right, key);
    }

    else
    {
        // If the node is with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // If the node has two children
        struct node *temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

void search (struct node *node, int target)
{
  if (node == NULL)
    {
      printf("The number does not exist\n");
      exit(0);
    }

  if (node->key == target)
    {
      	printf("The Searched item is found\n");
    }
  else if (node->key > target)
    {
      return search (node->left, target);	
    }
  else
    {
      return search (node->right, target);
    }
}

int main()
{
    int data, ch;
    struct node *root = NULL;
    while (1)
    {
        printf("\n1.Insertion");
        printf("\n2.Searching Element");
        printf("\n3.Deletion");
        printf("\n4.Minimum");
        printf("\n5.Maximum");
        printf("\n6.Display");
        printf("\n7.Exit");
        printf("\nEnter your choice: ");

        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the element to insert: ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            printf("\nEnter the element to search: ");
            scanf("%d", &data);
            search(root, data);
            break;
        case 3:
            printf("\nEnter the element to delete: ");
            scanf("%d", &data);
            root = deleteNode(root, data);
            break;
        case 4:
            printf("Min Value: %d\n", minValueNode(root)->key);
            break;
        case 5:
            printf("Min Value: %d\n", maxValueNode(root)->key);
            break;
        case 6:
            printf("\nInorder Traversal: \n");
            inorder(root);
            printf("\n");
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nWrong option");
        }
    }

    return 0;
}