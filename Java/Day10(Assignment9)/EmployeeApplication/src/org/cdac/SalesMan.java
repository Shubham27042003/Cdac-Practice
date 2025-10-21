package org.cdac;

public class SalesMan extends Employee {

	
	protected float commision;
	
	//constructor
	public SalesMan(String name, String address, int age, char gender, float basicSalary,float commision) {
		super(name, address, age, gender, basicSalary);
		
		this.commision=(commision<0 || commision>50)?30:commision;
	}

	//getter
	public float getCommision() {
		return commision;
	}


	//setter
	public void setCommision(float commision) {
		this.commision=(commision<0 || commision>50)?30:commision;
	}


	@Override
	public float computeSalary() {

		return basicSalary + (basicSalary * commision/100);
	}
	
	
	@Override
	public String toString()
	{
		return (super.toString()+"\nCommision : "+commision+"\nTotal Salary : "+computeSalary());
		
	}

}
