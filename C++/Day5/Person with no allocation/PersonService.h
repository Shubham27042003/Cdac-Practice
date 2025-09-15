#include "Person.h"
class PersonServices{
    private:
	    static Person parr[SIZE];
	    static int count;
	public:
    static Person accept();
		static void addPerson(Person &p);
		static Person * searchById(int id);
		static void displayAll();
		static Person* searchByName(char name[]);
		static void sortById();
		static void sortByName();
		static Person* modifyAddressbyId(int id,char addr[]);
	
};
