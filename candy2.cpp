#include <iostream>
#include <cstring>  
#include "candy2.h"
using namespace std;
//Abdullah Ali Khan, program 5, // this file aske the user for information
void insert_front(node*& head) {
    node* new_node = new node;
    char temp[100];

  
    cout << "Enter candy name: ";
    cin.getline(temp, 100);
    new_node->name = new char[strlen(temp) + 1];
    strcpy(new_node->name, temp);

    cout << "Enter cost: ";
    cin >> new_node->cost;
    cin.ignore(100, '\n');

    cout << "Enter type: ";
    cin.getline(new_node->type, SIZE);

    cout << "Enter weight (oz): ";
    cin >> new_node->weight;
    cin.ignore(100, '\n');

    cout << "Enter flavor: ";
    cin.getline(new_node->flavor, SIZE);

    cout << "Enter color: ";
    cin.getline(new_node->color, SIZE);

    new_node->next = head;
    head = new_node;
}

void insert_end(node*& head) {
    node* new_node = new node;
    char temp[100];

    // Candy name (dynamically allocated)
    cout << "Enter candy name: ";
    cin.getline(temp, 100);
    new_node->name = new char[strlen(temp) + 1];
    strcpy(new_node->name, temp);


    cout << "Enter cost: ";
    cin >> new_node->cost;
    cin.ignore(100, '\n');

    cout << "Enter type: ";
    cin.getline(new_node->type, SIZE);

    cout << "Enter weight (oz): ";
    cin >> new_node->weight;
    cin.ignore(100, '\n');

    cout << "Enter flavor: ";
    cin.getline(new_node->flavor, SIZE);

    cout << "Enter color: ";
    cin.getline(new_node->color, SIZE);

    new_node->next = NULL;

    // If list is empty
    if (!head) {
        head = new_node;
        return;
    }

    // Go to end of list
    node* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = new_node;
}
void display_all(node*&head)
{
	if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    node* current = head;
    while (current != NULL) {
	cout << "-----------------------------" << endl;
        cout << "\nCandy Name: " << current->name << endl;
        cout << "Cost: $" << current->cost << endl;
        cout << "Type: " << current->type << endl;
        cout << "Weight: " << current->weight << " oz" << endl;
        cout << "Flavor: " << current->flavor << endl;
        cout << "Color: " << current->color << endl;
        cout << "-----------------------------" << endl;

        current = current->next; 
    }
}

void display_type(node* head, const char* user_type) {
    bool found = false;
    while (head != NULL) {
        if (strcmp(head->type, user_type) == 0) {
	    cout << "-----------------------------" << endl;
            cout << "\nCandy Name: " << head->name << endl;
            cout << "Cost: $" << head->cost << endl;
            cout << "Type: " << head->type << endl;
            cout << "Weight: " << head->weight << " oz" << endl;
            cout << "Flavor: " << head->flavor << endl;
            cout << "Color: " << head->color << endl;
            cout << "-----------------------------" << endl;
            found = true;
        }
        head = head->next;
    }

    if (!found) {
        cout << "No candies of type \"" << user_type << "\" found.\n";
    }
}

void destroy_list(node*& head) {
    node* current = head;
    while (current != NULL) {
        node* temp = current->next;
        delete[] current->name; 
        delete current;
        current = temp;
    }
    head = NULL;
}
