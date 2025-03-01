#include<iostream>
using namespace std;
#define maxsz 10

int stack[maxsz],index1=-1;


void push()
{
    int element;
    if(index1==maxsz-1)
    {
        cout<<"Stack is Overflow  ";

    }
    else
    {
        cout<<"Insert any element in the stack: ";
        cin>>element;
        index1++;
        stack[index1] = element;

    }
}

void print()
{
    if(index1==-1)
    {
        cout<<"The stack is empty: ";

    }
    else{
        cout<<" Stack elements are: ";
        for(int i=0;i<=index1;i++)
        {
            cout<<stack[i]<<" ";

        }
        cout<<endl;
    }
}

void pop()
{
    if(index1==-1)
    {
        cout<<"Stack is empty: \n";

    }
    else
    {
        cout<<"popped elements:  "<<stack[index1]<<endl;
        index1--;

    }

}


int main()
{
    int choice;
    do{
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            print();
            break;

            case 4:
            cout<<"Exiting....\n";
            break;

            default:
            cout<<"Enter valid option: ";
            break;
        }
    }
    while (choice!=4);
    
}