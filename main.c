#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void main(){
    int num;
struct node *root =NULL;
root=insert(root,10);
root=insert(root,7);
root=insert(root,25);
printf("What data do you want to search?");
scanf("%d",&num);
if(search(root,num)==1){
    printf("Found!");
    }


    else{
        printf("Not found!");
    }
}

/*struct node* */insert(struct node *root,int data){
if (root==NULL){
    root=getNewNode(data);
}
else if (data<=(root->data)){
    root->left=insert(root->left,data);
}
else {
    root->right=insert(root->right,data);
}
return root;
}

/*struct node* */getNewNode(int data){
struct node* temp=(struct node*) malloc(sizeof(struct node));
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
};

int search(struct node *root,int data){
if (root==NULL)
    return 0;
else if(data==root->data){
    return 1;
}
else if(data<=root->data)
    return search(root->left,data);
else
    return search (root->right,data);

}
