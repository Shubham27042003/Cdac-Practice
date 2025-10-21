package org.cdac;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FilterOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.Comparator;
import java.util.Iterator;
import java.util.LinkedList;

import org.inout.ConsoleInput;
import org.utils.LinkedListException;
import org.utils.List;
import org.utils.TraverseList;
import org.utils.TraverseListException;
import org.utils.UpdateListException;

public class Entry {

	public static void main(String[] args) {
		int choice;
		LinkedList<Employee> employeesList = new LinkedList<>();
		int count = 0;

		do {
			System.out.println("1] Add");

			System.out.println("2] Display All");

			System.out.println("3] Save");

			System.out.println("4] Load");

			System.out.println("5] Sort");

			System.out.println("6] Traverse");

			System.out.println("7] Exit");

			System.out.println("Enter Your Choice");
			choice = ConsoleInput.getInt();

			switch (choice) {
			case 1: {
				int addChoice;
				do {

					System.out.println("1] Add Manager");

					System.out.println("2] Add Engineer");

					System.out.println("3] Add SalesMan");

					System.out.println("4] Exit");

					System.out.println("Enter Your Choice");

					addChoice = ConsoleInput.getInt();
					if (addChoice >= 1 && addChoice < 4) {

						employeesList.add(addEmployees(addChoice));

						count++;
					}

				} while (addChoice != 4);

			}
				break;
			case 2: {
				System.out.println("All Employees");

				displayAll(employeesList);

			}
				break;
			case 3: {
				try (ObjectOutputStream objstream = new ObjectOutputStream(new FileOutputStream("Employee.txt"))) {

					Iterator<Employee> iterator = employeesList.iterator();
					while (iterator.hasNext()) {
						Employee objEmployee = iterator.next();
						objstream.writeObject(objEmployee);
					}

				} catch (FileNotFoundException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
			}
				break;
			case 4: {
				try (ObjectInputStream objStream = new ObjectInputStream(new FileInputStream("Employee.txt"))) {
					Employee objEmployee = null;
					while ((objEmployee = (Employee) objStream.readObject()) != null) {
						employeesList.add(objEmployee);
					}

				} catch (FileNotFoundException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (IOException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				} catch (ClassNotFoundException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}

			}
				break;
			case 5: {
				LinkedList<Employee> tempList = new LinkedList<>();
				tempList = (LinkedList<Employee>) employeesList.clone();

//					Iterator<Employee> iterator = employeesList.iterator();
//					while (iterator.hasNext()) {
//						Employee objEmployee=iterator.next();
//						objstream.writeObject(objEmployee);

				int sortChoice;
				do {
					System.out.println("1] Sort by Name");
					System.out.println("2] Sort by Designation");
					System.out.println("3] Exit");
					System.out.println("Enter Your Choice");

					sortChoice = ConsoleInput.getInt();

					switch (sortChoice) {

					case 1: {
						tempList.sort(Comparator.comparing(Employee::getName));

					}
						break;

					case 2: {
						tempList.sort(Comparator.comparing(e -> e.getClass().getSimpleName()));

					}
						break;
					}

					displayAll(tempList);

				} while (sortChoice != 3);

			}
				break;
			case 6: {
				int traverseChoice;
				do {

					System.out.println("1] First");

					System.out.println("2] Next");

					System.out.println("3] Previous");

					System.out.println("4] Last");

					System.out.println("5] Delete");

					System.out.println("6] Exit");

					System.out.println("Enter Your Choice");

					traverseChoice = ConsoleInput.getInt();

					switch (traverseChoice) {
					case 1: {
						System.out.println(employeesList.getFirst());
					}
						break;
					case 2: {
//							System.out.println(employeesList);
					}
						break;
					case 3: {
//							System.out.println((TraverseList<Employee>) employeesList.getPrevious());
					}
						break;
					case 4: {
						System.out.println(employeesList.getLast());
					}
						break;
					case 5: {
						int index;
						System.out.println("Enter index");
						index = ConsoleInput.getInt();
						employeesList.remove(index);
					}
						break;
					default: {
						System.out.println("Enter Valid Choice");
					}
					}

				} while (traverseChoice != 6);
			}
				break;
			case 7: {
				System.out.println("Thank You!!!!");
			}
				break;
			default: {
				System.out.println("Enter valid choice!!!");
			}
			}
		} while (choice != 7);
	}

	private static Employee addEmployees(int addChoice) {
		String name;
		String address;
		int age;
		char gender;
		float basicSalary;

		System.out.println("Enter name");
		name = ConsoleInput.getString();

		System.out.println("Enter Address");
		address = ConsoleInput.getString();

		System.out.println("Enter Age");
		age = ConsoleInput.getInt();

		System.out.println("Enter Gender");
		gender = ConsoleInput.getChar();

		System.out.println("Enter Basic Salary");
		basicSalary = ConsoleInput.getFloat();

		switch (addChoice) {
		case 1: {
			float hra;
			System.out.println("Enter HRA (%)");
			hra = ConsoleInput.getFloat();
			return new Manager(name, address, age, gender, basicSalary, hra);
		}
		case 2: {
			int overTime;
			System.out.println("Enter Over Time");
			overTime = ConsoleInput.getInt();
			return new Engineer(name, address, age, gender, basicSalary, overTime);
		}
		case 3: {

			float commision;
			System.out.println("Enter Commision (%)");
			commision = ConsoleInput.getFloat();
			return new SalesMan(name, address, age, gender, basicSalary, commision);
		}
		}
		return null;
	}

	// displayAll
	private static void displayAll(LinkedList<Employee> employeesList) {

		Iterator<Employee> iterator = employeesList.iterator();
		while (iterator.hasNext()) {
			Employee objEmployee = iterator.next();
			System.out.println(objEmployee.toString());
		}
	}

}
