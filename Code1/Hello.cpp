#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    cout<<"Hello World";
    return 0;
    struct node *head = (*node)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;
    struct node *h1 = malloc(sizeof(struct node));
    head->next = h1;
    h1->data = 20;
    h1->next = NULL;

    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}