
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root == NULL) return -1;
        int heightl = height(root->left);
        int heightr = height(root->right);
        if(heightl>heightr){
            return heightl+1;
        }
        else{
            return heightr+1;
        }
    }
