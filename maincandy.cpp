#include "candy2.h"

//Abdullah Ali Khan, // this file calls all the fuctions

int main()
{
	node * head = NULL;

	insert_front(head); 
	insert_end(head);
	display_all(head);
	
	char user_type[SIZE];
	cout << "\nEnter candy type to display (e.g., gummy): ";
    	cin.get(user_type, SIZE, '\n');
    	
	display_type(head, user_type);

	destroy_list(head);
        cout << "\nMemory has been deallocated and list destroyed.\n";

	return 0;
}
