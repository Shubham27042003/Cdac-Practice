public class SalesMan extends Employee {

	protected float commision;
	
	//constructor
	public SalesMan(String name, String address, int age, char gender, float basicSalary,float commision) {
		super(name, address, age, gender, basicSalary);
		
		this.commision=commision;
	}

	//getter
	public float getCommision() {
		return commision;
	}


	//setter
	public void setCommision(float commision) {
		this.commision = commision;
	}


	@Override
	public float computeSalary() {

		return basicSalary*commision;
	}
	
	
	public String toString() {
		return "name: "+this.name+"\nAddress: "+this.address+"\nAge: "+this.age+"\nGender: "+this.gender+"\nBasicSalary: "+this.basicSalary+"\nCommision: "+this.commision;
	}

}
