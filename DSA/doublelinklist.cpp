#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    struct node *next;
    int data;
}*first,*second,*third;
//Either declare node like this
int main(){
    /* 
    Or Declare Node like this
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    */
    first=NULL; //Initializing node
    second = NULL;
    third = NULL;
    first=(struct node *)malloc(sizeof(struct node)); //Allocating memory
    second =(struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    first->data=100;
    first->prev=NULL;
    first->next=second;
    second->data=200;
    second->prev=first;
    second->next=third;
    third->data=300;
    third->prev=second;
    third->next=NULL;
    cout<<"First data "<<first->data<<endl;
    cout<<"First prev node "<<first->prev<<endl;
    cout<<"First link part "<<first->next<<endl;
    cout<<"Second data "<<second->data<<endl;
    cout<<"Second prev node "<<second->prev<<endl;
    cout<<"Second link part "<<second->next<<endl;
    cout<<"Third Data "<<third->data<<endl;
    cout<<"Third prev node "<<third->prev<<endl;
    cout<<"Third link part "<<third->next<<endl;
    return 0;
}