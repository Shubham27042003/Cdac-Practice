public abstract class Employee {
	protected String name;
	protected String address;
	protected int age;
	protected char gender;
	protected float basicSalary;
	
	public Employee(String name,String address,int age,char gender,float basicSalary) {
		super();
		this.name=name;
		this.address=address;
		this.age=age;
		this.gender=gender;
		this.basicSalary=basicSalary;
	}
	
	public void setName(String name) {
		if(name==null) {
			this.name=null;
		}else {
		this.name=name;
	}
 }
	public void setAddress(String address) {
		if(address==null) {
			this.address=null;
		}else {
		this.address=address;
		}
	}
	public void setAge(int age) {
		if(age<0) {
			this.age=0;
		}else {
			this.age=age;
	}
	}
	public void setGender(char gender) {
		if (gender == '\0') {
	        this.gender = 'U';
	      }else {
	    	  this.gender=gender;
		}
	}
	public void setBasicSalary(float basicSalary) {
		if(basicSalary==0.0f) {
			this.basicSalary=0.0f;
		}else {
		this.basicSalary=basicSalary;
		}
	}
	public String getName() {
		return name;
	}
	public String getAddress() {
		return address;
	}
	public int getAge() {
		return age;
	}
	public char getGender() {
		return gender;
	}
	public float getBasicSalary() {
		return basicSalary;
	}
	
	public abstract float computeSalary();
	
	public String toString() {
		return "Name: "+this.name+"\nAddress: "+this.address+"\nAge: "+this.age+"\nGender: "+this.gender+"\nBasicSalary: "+this.basicSalary;
	}
	
}
