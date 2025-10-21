package org.cdac;

public abstract class Employee {

	protected String name;
	
	protected String address;
	
	protected int age;
	
	protected char gender;
	
	protected float basicSalary;
	
	//constructor
	public Employee(String name, String address, int age, char gender, float basicSalary) {
		super();
		this.name=(name==null || name.isEmpty())?"NULL":name;
		
		this.address=(address==null || address.isEmpty())?"NULL":address;
		
		this.age=(age<18 || age>60)?30:age;
		
		this.gender=(gender=='m'||gender=='M'||gender=='f'||gender=='F')?gender:'M';
		
		this.basicSalary=(basicSalary<=0)?50000.00f:basicSalary;
	}
	
	
	//getters and setters
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name=(name==null || name.isEmpty())?"NULL":name;
	}
	
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address=(address==null || address.isEmpty())?"NULL":address;
		
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAge(int age) {
		this.age=(age<18 || age>60)?30:age;
		
	}
	
	public char getGender() {
		return gender;
	}
	
	public void setGender(char gender) {
		this.gender=(gender=='m'||gender=='M'||gender=='f'||gender=='F')?gender:'M';
	}
	
	public float getBasicSalary() {
		return basicSalary;
	}
	
	public void setBasicSalary(float basicSalary) {
		this.basicSalary=(basicSalary<=0)?50000.00f:basicSalary;
	}
	
	
	public abstract float computeSalary();
	
	@Override
	public String toString()
	{
		return ("\nName : "+name+"\nAddress : "+address+"\nAge : "+age+"\nGender : "+gender+"\nBasic Salary : "+basicSalary);
		
	}
	
	
}
