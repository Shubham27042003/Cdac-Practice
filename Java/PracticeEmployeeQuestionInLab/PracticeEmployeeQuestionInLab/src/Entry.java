import java.time.LocalDate;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

import org.core.Department;
import org.core.Employee;
import org.exception.CustomException;
import org.utils.CollectionUtils;
import org.utils.IOUtils;

public class Entry {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try (Scanner scanner = new Scanner(System.in)) {
			CollectionUtils employeeData = new CollectionUtils();
			
			employeeData.list = IOUtils.readData("EmployeeData.txt");
			for(Employee emp : employeeData.list)
				System.out.println(emp);
			
			int choice = 0;
			do {
				System.out.println("----------EMPLOYEE MENU----------------------");
				System.out.println("1.Add Employee");
				System.out.println("2.Display Employee");
				System.out.println("3.Display Employee By Department");
				System.out.println("4.Employee Count Department Wise");
				System.out.println("5.Sort Based On JoiningDate");
				System.out.println("6.Exit");
				
				System.out.println("Enter your Choice : ");
				choice = scanner.nextInt();
				
				switch(choice) {
				case 1:{
					System.out.println("Enter id:");
					int id = scanner.nextInt();
					
					System.out.println("Enter name: ");
					String name = scanner.next();
					
					System.out.println("Select Dept : Network,IT,Account ");
					String department = scanner.next().toUpperCase();	
					
					System.out.println("Enter joining date in YYYY-MM-DD format: ");
					String date = scanner.next();
					LocalDate joiningDate = LocalDate.parse(date);
					if(joiningDate.compareTo(LocalDate.now()) >= 0)
						throw new CustomException("Joining Date should be before current date");
					
					employeeData.list.add(new Employee(id,name,Department.valueOf(department),LocalDate.parse(date)));
					
					System.out.println("Employee added successfully");
				}
				break;
				
				case 2:{				
					for(Employee emp :employeeData.list) {
						System.out.println(emp);
					}
				}
				break;
				
				case 3:{
					System.out.println("Enter department name:");
					String dept = scanner.next().toUpperCase();
					for(Employee emp :employeeData.list) {
						if((emp.getDept().toString()).equals(dept))
							System.out.println(emp);
					}
				}
				break;
				
				case 4:{
					int countIT = 0;
					int countAccount = 0;
					int countNetwork = 0;
					for(Employee emp :employeeData.list) {
						if((emp.getDept().toString()) == "IT")
							countIT++;
						else if((emp.getDept().toString()) == "ACCOUNT")
							countAccount++;
						else
							countNetwork++;
							
					}
					
					System.out.println("Count of Network department is: " + countNetwork);
					System.out.println("Count of IT department is: " + countIT);
					System.out.println("Count of Account department is: " + countAccount);
				}
				break;
				
				case 5:{
					Collections.sort(employeeData.list,Comparator.comparing(Employee::getJoiningDate));
					
					System.out.println("Sorted by joinig date successfully");
				}
				break;
				
				case 6:{
					IOUtils.saveData("EmployeeData.txt", employeeData.list);
				}
				break;
				
				default:System.out.println("Enter valid choice");
				
				}
				
			}while(choice!=6);
		} catch (CustomException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}

}
