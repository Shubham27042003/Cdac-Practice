
public class Student {
	String name;
	int roll_no;
	String phone_no;
	String address;
	
	public Student()
	{
	}
	
	public Student(String name,int roll_no,String phone_no,String address)
	{
		this.name=name;
		this.roll_no=roll_no;
		this.phone_no=phone_no;
		this.address=address;
	}
	
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getRoll_no() {
		return roll_no;
	}

	public void setRoll_no(int roll_no) {
		this.roll_no = roll_no;
	}

	public String getPhone_no() {
		return phone_no;
	}

	public void setPhone_no(String phone_no) {
		this.phone_no = phone_no;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public void display()
	{
		System.out.println("Name: "+getName());
		System.out.println("Roll No.: "+getRoll_no());
		System.out.println("Phone: "+getPhone_no());
		System.out.println("Address: "+getAddress());
	}

}
