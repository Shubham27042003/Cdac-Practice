public class Manager extends Employee {

	protected float hra;
	
	
	//constructors
	public Manager(String name, String address, int age, char gender, float basicSalary, float hra) {
		super(name, address, age, gender, basicSalary);
		this.hra = hra;
	}

	//getter
	public float getHra() {
		return hra;
	}

	//setter
	public void setHra(float hra) {
		this.hra = hra;
	}

	

	@Override
	public float computeSalary() {
		
		return basicSalary*hra;
	}
	
	public String toString() {
		return "Name: "+this.name+"\nAddress: "+this.address+"\nAge: "+this.age+"\nGender: "+this.gender+"\nBasicSalary: "+this.basicSalary+"\nHRA: "+this.hra;
	}
}
