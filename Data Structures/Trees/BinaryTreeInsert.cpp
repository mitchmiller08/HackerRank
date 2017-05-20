/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if(root == NULL){
        auto* newnode = new node();
        newnode->data = value;
        return newnode;
    }
    else if(value < root->data){
        root->left = insert(root->left,value);
    }
    else{
        root->right = insert(root->right,value);
    }
    return root;
}
