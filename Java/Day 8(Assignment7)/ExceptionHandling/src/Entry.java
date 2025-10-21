import java.io.IOException;

import org.inout.ConsoleInput;

public class Entry {

	public static void main(String[] args) {

		 String name;
		 int age;
		 String address;
		 float basicSalary;
		
		try {
			System.out.println("Enter Name");
			name=ConsoleInput.getString();
			if(name.isEmpty())
				throw new NullPointerException();
			
			System.out.println("Enter Age");
			age=ConsoleInput.getInt();
			if(age<18 || age>60)
				throw new IOException("Invalid Input");
			
			System.out.println("Enter Address");
			address=ConsoleInput.getString();
			if(name.isEmpty())
				throw new NullPointerException();
			
			System.out.println("Enter Basic Salary");
			basicSalary=ConsoleInput.getFloat();
			if(basicSalary<=0)
				throw new Exception("Invalid Salary");
			
			Employee objEmployee=new Employee( name,age, address,basicSalary);
			
			System.out.println(objEmployee.getName()+"\n"+objEmployee.getAge()+"\n"+objEmployee.getAddress()+"\n"+objEmployee.getBasicSalary());
		}
		catch(NullPointerException nullPointerexception) {
			System.out.println(nullPointerexception);
			nullPointerexception.printStackTrace();
		}
		catch(IOException exception) {
			System.out.println(exception);
			exception.printStackTrace();
		}
		catch(Exception exception) {
			System.out.println(exception);
			exception.printStackTrace();
		}
		
		finally {
			System.out.println("Final block");
		}
	}

}
