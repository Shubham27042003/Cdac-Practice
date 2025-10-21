
public class StudentEntry {

	public static void main(String[] args) {
		Student student=new Student();
		student.roll_no=2;
		student.name="john";
		
		Student student1=new Student("sam",11,"9087987656","pune");
		Student student2=new Student("john",13,"7865784532","mumbai");
		
		student1.display();
		student2.display();

	}

}
