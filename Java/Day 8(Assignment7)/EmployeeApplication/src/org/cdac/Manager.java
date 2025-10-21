package org.cdac;

public class Manager extends Employee {

	protected float hra;
	
	
	//constructors
	public Manager(String name, String address, int age, char gender, float basicSalary, float hra) {
		super(name, address, age, gender, basicSalary);
		this.hra=(hra<0 || hra>60)?40:hra;
	}

	//getter
	public float getHra() {
		return hra;
	}

	//setter
	public void setHra(float hra) {
		this.hra=(hra<0 || hra>60)?40:hra;
	}

	

	@Override
	public float computeSalary() {
		
		return basicSalary + (basicSalary * hra/100);
	}
	
	@Override
	public String toString()
	{
		return (super.toString()+"\nHra : "+hra+"\nTotal Salary : "+computeSalary());
		
	}
	

}
