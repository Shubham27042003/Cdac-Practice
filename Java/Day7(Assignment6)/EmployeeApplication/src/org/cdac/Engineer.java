package org.cdac;

public class Engineer extends Employee {

	protected int overTime;
	
	//constructor
	public Engineer(String name, String address, int age, char gender, float basicSalary,int overTime) {
		super(name, address, age, gender, basicSalary);
		
		this.overTime=(overTime<0 || overTime>10)?6:overTime;
		
	}
	
	//getter
	public int getOverTime() {
		return overTime;
	}

	
	//setter
	public void setOverTime(int overTime) {
		this.overTime=(overTime<0 || overTime>10)?6:overTime;
	}

	
	@Override
	public float computeSalary() {
		int overtimeRate=300;
		return basicSalary + (overTime * overtimeRate);
	}

	@Override
	public String toString()
	{		
		return (super.toString()+"\nOver Time : "+overTime+"\nTotal Salary : "+computeSalary());		
	}
	
	

}
