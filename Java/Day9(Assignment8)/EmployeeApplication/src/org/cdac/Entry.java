package org.cdac;

import org.inout.ConsoleInput;
import org.utils.LinkedList;
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
						List<Employee> listEmployee = (List<Employee>) employeesList;
						try {
							listEmployee.adddata(addEmployees(addChoice));
						} catch (UpdateListException e) {
							// TODO Auto-generated catch block
							System.out.println(e.getMessage());
							e.printStackTrace();
						}
						count++;
					}

				} while (addChoice != 4);

			}
				break;
			case 2: {
				System.out.println("All Employees");

//				Employee currentEmployee = employeesList.getFirst();
//				while (currentEmployee != null) {
//					System.out.println(currentEmployee.toString());
//					currentEmployee = employeesList.getNext();
//
//				}

//				for(Employee employee:employeesList)
//				{
//					System.out.println(employee.toString());
//				}

				try {
					displayAll(employeesList);
				} catch (TraverseListException e) {
					// TODO Auto-generated catch block
					System.out.println(e.getMessage());
					e.printStackTrace();
				}

			}
				break;
			case 5: {
				LinkedList<Employee> tempList;
				tempList = new LinkedList<>();
				try {

					Employee temp = employeesList.getFirst();
					while (temp != null) {
						tempList.adddata(temp);
						temp = employeesList.getNext();
					}
				} catch (TraverseListException e) {
					// TODO Auto-generated catch block
					System.out.println(e.getMessage());
					e.printStackTrace();
				} catch (UpdateListException e) {
					// TODO Auto-generated catch block
					System.out.println(e.getMessage());
					e.printStackTrace();
				}
				int sortChoice;
				do {
					System.out.println("1] Sort by Name");
					System.out.println("2] Sort by Designation");
					System.out.println("3] Exit");
					System.out.println("Enter Your Choice");

					sortChoice = ConsoleInput.getInt();

					try {
						switch (sortChoice) {

						case 1: {
							for (int i = 0; i < tempList.getMaxCount() - 1; i++) {
								Employee employee1 = tempList.getFirst();
								Employee employee2 = tempList.getNext();
								while (employee2 != null) {
									if (employee1.getName().compareToIgnoreCase(employee2.getName()) > 0) {
										tempList.swap(employee1, employee2);
									}
									employee1 = employee2;
									employee2 = tempList.getNext();
									if (employee2 == null)
										break;
								}
							}

						}
							break;

						case 2: {
							for (int i = 0; i < tempList.getMaxCount() - 1; i++) {
								Employee employee1 = tempList.getFirst();
								Employee employee2 = tempList.getNext();
								while (employee2 != null) {

									if (employee1 == null || employee2 == null)
										break;

									String class1 = employee1.getClass().getSimpleName();
									String class2 = employee2.getClass().getSimpleName();

									if (class1.compareToIgnoreCase(class2) > 0) {
										tempList.swap(employee1, employee2);
									}

									employee1 = employee2;
									employee2 = tempList.getNext();
									if (employee2 == null)
										break;
								}
							}
						}
							break;
						}
					} catch (TraverseListException e) {
						// TODO Auto-generated catch block
						System.out.println(e.getMessage());
						e.printStackTrace();
					} catch (LinkedListException e) {
						// TODO Auto-generated catch block
						System.out.println(e.getMessage());
						e.printStackTrace();
					}

//					Employee currentEmployee = tempList.getFirst();
//					while (currentEmployee != null) {
//						System.out.println(currentEmployee.toString());
//						currentEmployee = tempList.getNext();
//					}
					try {
						displayAll(tempList);
					} catch (TraverseListException e) {
						// TODO Auto-generated catch block
						System.out.println(e.getMessage());
						e.printStackTrace();
					}

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

					try {
						switch (traverseChoice) {
						case 1: {
							System.out.println((TraverseList<Employee>) employeesList.getFirst());
						}
							break;
						case 2: {
							System.out.println((TraverseList<Employee>) employeesList.getNext());
						}
							break;
						case 3: {
							System.out.println((TraverseList<Employee>) employeesList.getPrevious());
						}
							break;
						case 4: {
							System.out.println((TraverseList<Employee>) employeesList.getLast());
						}
							break;
						case 5: {
							int index;
							System.out.println("Enter index");
							index = ConsoleInput.getInt();
							((List<Employee>) employeesList).delete(index);
						}
							break;
						default: {
							System.out.println("Enter Valid Choice");
						}
						}
					} catch (TraverseListException e) {
						// TODO Auto-generated catch block
						System.out.println(e.getMessage());
						e.printStackTrace();
					} catch (UpdateListException e) {
						// TODO Auto-generated catch block
						System.out.println(e.getMessage());
						e.printStackTrace();
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
	private static void displayAll(TraverseList<Employee> employeesList) throws TraverseListException {

		Employee objEmployee = employeesList.getFirst();
		while (objEmployee != null) {
			System.out.println(objEmployee.toString());
			objEmployee = employeesList.getNext();
		}
	}

}
