#include<iostream>
//#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *first = NULL;
    struct node *second = NULL;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    first->data = 10;
    first->next = second;
    second->data=20;
    second->next=NULL;
    cout<<"Data in first node"<<first->data<<endl;
    cout<<"Address in First next "<<first->next<<endl;
    cout<<"Data in Second node"<<second->data<<endl;
    cout<<"Address in second next "<<second->next<<endl;
    return 0;
}