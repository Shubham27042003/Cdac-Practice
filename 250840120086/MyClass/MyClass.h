class MyClass{
  int i; 
  int j;
  int k;
  char* name;
 
  public:
    MyClass();
    MyClass(int i,int j,int k,const char* nm);

    //copy constuctor
    MyClass(const MyClass& ob);
    
    ~MyClass();
    
     MyClass operator+(const MyClass& other) const ;
     
    MyClass operator -(const MyClass& other)const;
    
    
    MyClass operator*(const MyClass& other) const ;

    MyClass operator/(const MyClass& other) const ;

    // == operator
    bool operator==(const MyClass& other) const ;

    void display() const ;
};
