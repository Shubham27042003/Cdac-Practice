//#include"Address.h"
#include"Person.h"
const int MAX_PERSONS = 100;
class PersonService{
	private:
		static Person *pArr[MAX_PERSONS];
		static int cnt;
	public:
    	static void addPerson();
    	static void displayAll();
    	static Person* searchById(int id);
    	static Person* searchByName(const char* name);
    	static bool modifyAddress(int id);
    	static void findAddrById(int id);
    	static void displayAllPersonInCity(const char* ct);
    	static void cleanup();

};
