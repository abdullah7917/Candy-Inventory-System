#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

//Abdullah Ali Khan, program 5, // this file is creating a struct for node

const int SIZE {21};
struct node 
{
	char * name;
	float cost;
	char type [SIZE];
	int weight;
	char color[SIZE];
	char flavor[SIZE];
	node *next;

};
void insert_front(node*& head);
void insert_end(node*& head);
void display_all(node*&head);
void display_type(node*head, const char* user_type);
void destroy_list(node*& head);
