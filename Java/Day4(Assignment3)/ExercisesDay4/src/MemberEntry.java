
public class MemberEntry {

	public static void main(String[] args) {

	        PrimeMember pm = new PrimeMember();

	        System.out.print("Enter Name: ");
	        pm.setName(ConsoleInput.getString());

	        System.out.print("Enter Age: ");
	        pm.setAge(ConsoleInput.getInt());

	        System.out.print("Enter Phone Number: ");
	        pm.setPhoneNumber(ConsoleInput.getString());

	        System.out.print("Enter Address: ");
	        pm.setAddress(ConsoleInput.getString());

	        System.out.print("Enter Salary: ");
	        pm.setSalary(ConsoleInput.getFloat());

	        // Input child class fields
	        System.out.print("Enter Joining Year: ");
	        pm.setJoiningYear(ConsoleInput.getInt());

	        System.out.print("Enter Joining Fees: ");
	        pm.setJoiningFees(ConsoleInput.getFloat());

	        System.out.print("Is Active? (true/false): ");
	        pm.setIsActive(true);

	        pm.display();

	}

}
