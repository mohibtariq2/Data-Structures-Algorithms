#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* prev;
	
};


class Double_Linked_List{
	Node* head;
	
	public:
		
		Double_Linked_List()
		{
			head=NULL;
		}
		
		~Double_Linked_List() {};
		
		void add_node(int value)
		{
			Node* n = new Node();
			n->data=value;
			n->prev=NULL;
			n->next=NULL;
			if(head==NULL)
			{
				head=n;
			}
			else{
				
				head->prev=n;
				n->next=head;
				head=n;
			}
		}
		
	
    
    
    void display_list()
    {
    	Node* temp;
    	if(head==NULL)
    	{
    		cout<<"List is Empty"<<endl;
		}
		else{
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
			
		}
	}
	
	void bubble_sort()
    {
        
        
        for(Node *temp=head;temp->next!=NULL;temp=temp->next)
        {
            for(Node *temp2=temp->next;temp2!=NULL;temp2=temp2->next)
            {
                if(temp->data>temp2->data)
                {
                    Node* tmp = temp2->next;
                    temp2->next = temp;
                    temp->next = tmp;
                 
                }
            }
        }
        
    }
	  
};

int main()
{
	Double_Linked_List *dlist = new Double_Linked_List();
	dlist->add_node(1);
	dlist->add_node(3);
	dlist->add_node(0); 
	dlist->add_node(5);
	dlist->add_node(5);
	dlist->bubble_sort();
	dlist->display_list();
	
	
	
}
