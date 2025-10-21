
public class Employee {

	private String name;
	private int age;
	private String address;
	private float basicSalary;
	public Employee(String name, int age, String address, float basicSalary) {
		this.name = name;
		this.age = age;
		this.address = address;
		this.basicSalary = basicSalary;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	public float getBasicSalary() {
		return basicSalary;
	}
	public void setBasicSalary(float basicSalary) {
		this.basicSalary = basicSalary;
	}
	
	
	
	
}
