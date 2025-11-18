#include <stdio.h>
#include <stdlib.h>
// bsst -> binary search tree

// Definição da estrutura do nó
typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} node;

// Função para criar um novo nó
node *createNode(int value)
{
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        printf("Erro de alocação!\n");
        exit(1);
    }
    n->value = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// Inserção na BST (recursiva)
node *insert(node *root, int value)
{
    if (root == NULL)
    {
        return createNode(value);
    }
    if (value < root->value)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->value)
    {
        root->right = insert(root->right, value);
    }
    return root;
}

// Busca na BST (recursiva)
int search(node *root, int value)
{
    if (root == NULL)
    {
        return 0; // não encontrado
    }
    if (value == root->value)
    {
        return 1; // encontrado
    }
    else if (value < root->value)
    {
        return search(root->left, value);
    }
    else
    {
        return search(root->right, value);
    }
}

// Impressão in-order (ordenada)
void printInOrder(node *root)
{
    if (root != NULL)
    {
        printInOrder(root->left);
        printf("%d ", root->value);
        printInOrder(root->right);
    }
}

// Libera memória da árvore
void freeTree(node *root)
{
    if (root == NULL)
        return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Programa principal
int main(void)
{
    node *root = NULL;

    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(values) / sizeof(values[0]);

    // Inserindo valores
    for (int i = 0; i < n; i++)
    {
        root = insert(root, values[i]);
    }

    // Imprime a árvore em ordem
    printf("Elementos em ordem: ");
    printInOrder(root);
    printf("\n");

    // Busca
    int key = 10;
    if (search(root, key))
        printf("%d encontrado!\n", key);
    else
        printf("%d não encontrado.\n", key);

    // Libera memória
    freeTree(root);
    return 0;
}
