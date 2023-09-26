#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
};

class linklist 
{
public:
	node* head;
	int size;
	void init()
	{
		size = 0;
		head = new node();
		head->next = NULL;
	}


	void headinsert(int x)
	{
		node* r = head;
		node* s = new node();
		while (r->next != NULL)
		{
			r = r->next;
		}
		s->data = x;
		s->next = NULL;
		r->next = s;
	}

	void print()
	{
		node* s = head;
		while (s->next != NULL)
		{
			s = s->next;
			cout << s->data << endl;
		}
	}
};

int main()
{
	linklist p;
	p.init();

	int n,x;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		p.headinsert(x);
	}
	p.print();

	system("pause");
	return 0;
}