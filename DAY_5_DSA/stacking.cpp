#include<iostream>
using namespace std;
#define maxsz 10
int stack[maxsz],index1=-1;

int main()
{
    int choice;
    do{
        cout<<"\n1.Insert\n2.Delete Elements\n3.Display\n4.Exit\n";
        cout<<"Enter any choice: ";
        cin>>choice;
    switch(choice){
        case 1:push();break;
        case 2:pop();break;
        case 3:print();break;
        case 4:cout<<"Code is terminated";break;
        default:cout<<"Invalid Chpoce:\n";
    }    
    }while(choice!=4);
}

void push()
{
    int element;
    if(index1==maxsz-1)
    {
        cout<<"Stack is overflow";
    }
    else{
        cout<<"Insert any element in the stack:";
        cin>>element;
        index1++;
        stack[index1]=element;

    }
}
void pop()
{
    if(index1==-1)
    {cout<<"Stack is empty";}
    else{
        cout<<"Element is deleted"<<stack[index1]
    }
}
void print()
{
    if(index1==-1){
        cout<<"Stack is Empty";

    }
    else{
        cout<<"Elements are present in Stack";
        for (int i=0;i< index;i++)
    {
        cout<<stack[i]<<" ";
    }
    }
    
}
