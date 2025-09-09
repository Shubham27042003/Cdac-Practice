#ifndef Acc_
#define Acc_
class Account
{
private:
    static int count;
    char* fName;
    char* lName;
    char* contact;
    char id [20];
    char email[50];
    double bal;
public:
    Account();

    Account(const char* fn,const char* ln,const char* con,const char em[20],double bal );
    virtual ~Account();

    //setter methods
    void setfName(const char* name);
    void setlName(const char* name);
    void setContact(const char* cont);
    void setEmail(const char mail[]);
    void setBalance(double bal);

    //getter methods
    const char* getfName()const;
    const char* getlName()const;
    const char* getContact()const;
    const char* getMail()const;
    const char* getId()const;
    double getBal()const;

    //display 
    virtual void display() const;
        

};

#endif

