#ifndef ADDR_
#define ADDR_
class Address{
	private:
	   char * street;
	   char* city;
	   char* state;
	   int pin;
	
	public:
		Address();
		Address(const char * str,const char* ct,const char* st,int pn);
		//destructor
		virtual ~Address();
		
		//setters
		void setStreet(const char* str);
		void setCity(const char* ct);
		void setState(const char* st);
		void setPin(int pn);
		
		//getters
		const char* getStreet();
		const char* getCity();
		const char* getState();
		int getPin();
		
		//Display
		void display()const;

};

#endif
