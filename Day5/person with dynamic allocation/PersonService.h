#include"Person.h"
const int MAX_SIZE=100;
class PersonService{
    private:
       static Person* Per[MAX_SIZE];
       static int count;
    public:
       static void addPerson();
       static Person* searchById(int id);
       static void displayAll();
       static Person* searchByName(char* name);
       static void sortById();
       static void sortByName();
       static void modifyAddressById(int id);
};