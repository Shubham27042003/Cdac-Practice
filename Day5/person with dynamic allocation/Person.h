/*Day 5 Assignment
1. write a menu driven program to perform following tasks
1. Add person"<<endl;
2. Search by id"<<endl;
3. display all"<<endl;
4. Search by name"<<endl;
5. sort by id"<<endl;
6. sort by name"<<endl;
7. modify address by id"<<endl;
8. exit

store array of person objects in PersonService class, 
for each menu option create static method in PersonService class
*/
#ifndef SH_
#define SH_
class Person{
    private:
        int id;
        char* name;
        char* address;
    public:

        //Constructors
        Person();
        Person(int id,const char* name, const char* address);

        //Destructors
        ~Person();

        //setter

        void setId(int id);
        void setName(const char* name);
        void setAddress(const char* address);

        //getter

        int getId();
        const char* getName();
        const char* getAddress();

        //display

        void display();

};
#endif