
class Array{
  int arr1[5]; 
  int arr2[5];
  public:
    Array();
    Array(int arr1[]);
    //copy constuctor
    Array(Array& ob);
    
    Array operator +(Array& other)const;

    Array operator -(Array& other)const;
  
   void display() const;
};







  
  
