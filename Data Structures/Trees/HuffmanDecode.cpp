/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int i=0;
    auto* current = new node();
    current = root;
    while(i<s.size()){
        if(s[i]=='1'){
            current = current -> right;
            if(current->right == NULL && current->left == NULL){
                cout << current->data;
                current = root;
                i++;
            }
            else{
                i++;
            }
        }
        else{
           current = current -> left;
           if(current->right == NULL && current->left == NULL){
                cout << current->data;
                current = root;
                i++;
            }
            else{
                i++;
            } 
        }
    }
}
