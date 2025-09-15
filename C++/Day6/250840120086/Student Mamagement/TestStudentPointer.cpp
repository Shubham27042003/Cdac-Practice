#include<iostream>
#include"StudentService.h"
using namespace std;

int main(){
	int ch;
	do{
		"\n--- Student Management ---\n";
        	cout << "1. Add new Student"<<endl;
        	cout << "3. Display All Student"<<endl;;
        	cout << "4. Search by Id"<<endl;
        	cout << "5. Search by Name"<<endl;
        	cout << "6. Sort Students by m1 marks"<<endl;
        	cout << "7. Display All MSC Student"<<endl;
        	cout << "8. Display All PHD Student"<<endl;
        	cout << "9. Exit\n";
		
		cout<<"\n Enter your choice : "<<endl;
		cin>>ch;
		
		switch (ch) {
        		case 1:
        		case 2:
            			StudentService::addStudent(ch);
            			break;
        		case 3:
            			StudentService::displayAll();
            			break;
        		case 4: {
            			int id;
            			cout << "Enter ID to search: ";
            			cin >> id;
            			Student* st = StudentService::searchById(id);
            			if (st)
                			st->display();
            			else
                			cout << "Student not found.\n";
            			break;
        			}
        		case 5: {
            			 char name[50];
			    	cout << "Enter name to search: ";
			    	cin >> name;
			    	StudentService::searchByName(name);
			    	break;
        			}
        		case 6:
			    	StudentService::sortByM1();
			    	cout << "Sorted by M1.\n";
			    	StudentService::displayAll();
			    	break;
        		case 7:
            			StudentService::displayAllMSCStud();
            			break;
        		case 8:
            			StudentService::displayAllPHDStud();
            			break;
        		case 9:
            			StudentService::cleanup();
            			std::cout << "Exiting...\n";
            			break;
        		default:
            			std::cout << "Invalid choice.\n";
        	}
		
		
	}while(ch!=9);
	
	return 0;
}
