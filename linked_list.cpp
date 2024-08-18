#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void InstertatHead(){

}



int main(){
    node* node1 = new node(10);
    node* node2 = new node(20);

    cout<< node1 -> data<<endl;
    cout<< node1 -> next<<endl;

    return 0;
}