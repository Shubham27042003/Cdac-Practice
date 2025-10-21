public class Entry {

	public static void main(String[] args) {
		int choice;
		Employee[] employees = new Employee[100];
		int count = 0;

		do {
			System.out.println("1. Add");
			System.out.println("2. Display All");
			System.out.println("3. Save");
			System.out.println("4. Load");
			System.out.println("5. Sort");
			System.out.println("6. Exit");

			System.out.println("Enter Your Choice");
			choice = ConsoleInput.getInt();

			switch (choice) {
			case 1: {
				int addChoice;
				do {
					String name;
					String address;
					int age;
					char gender;
					float basicSalary;

					System.out.println("1. Add Manager");
					System.out.println("2. Add Engineer");
					System.out.println("3. Add SalesMan");
					System.out.println("4. Exit");
					System.out.println("Enter Your Choice");
					addChoice = ConsoleInput.getInt();

					switch (addChoice) {
					case 1: {
						float hra;
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
						System.out.println("Enter HRA");
						hra = ConsoleInput.getFloat();
						employees[count++] = new Manager(name, address, age, gender, basicSalary, hra);
					}
						break;
					case 2: {
						int overTime;

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
						System.out.println("Enter Over Time");
						overTime = ConsoleInput.getInt();
						employees[count++] = new Engineer(name, address, age, gender, basicSalary, overTime);
					}
						break;
					case 3: {

						float commision;
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
						System.out.println("Enter Commision");
						commision = ConsoleInput.getFloat();
						employees[count++] = new SalesMan(name, address, age, gender, basicSalary, commision);
					}
						break;
					default: {
						System.out.println("Enter valid choice!!!");
					}
					}

				} while (addChoice != 4);

			}
				break;
			case 2: {
				System.out.println("All Employees");
				System.out.println();

				for (int iTemp = 0; iTemp < count; iTemp++) {
					System.out.println(employees[iTemp]);
					
					/*if (employees[iTemp] instanceof Manager) {
						Manager tempManager = (Manager) employees[iTemp];
						System.out.println("HRA : " + tempManager.getHra());
					} else if (employees[iTemp] instanceof Engineer) {
						Engineer tempEngineer = (Engineer) employees[iTemp];
						System.out.println("Over Time : " + tempEngineer.getOverTime());
					} else {
						SalesMan tempSalesman = (SalesMan) employees[iTemp];
						System.out.println("Commision : " + tempSalesman.getCommision());
					}
					System.out.println();*/
				}

			}
				break;
			case 5: {
				int sortChoice;
				do {

					System.out.println("1] Sort by Name");
					System.out.println("2] Sort by Designation");
					System.out.println("3] Exit");
					System.out.println("Enter Your Choice");
					sortChoice = ConsoleInput.getInt();
					switch (sortChoice) {
					case 1: {
						String[] tempName = new String[count];
						for (int iTemp = 0; iTemp < count; iTemp++) {
							tempName[iTemp] = employees[iTemp].getName();
						}

						for (int iTemp = 0; iTemp < count; iTemp++) {
							for (int jTemp = 0; jTemp < count - iTemp - 1; jTemp++) {
								if (tempName[jTemp].compareTo(tempName[jTemp + 1]) > 0) {
									String tempString = tempName[jTemp];
									tempName[jTemp] = tempName[jTemp + 1];
									tempName[jTemp + 1] = tempString;
								}
							}

						}

						System.out.println("Employees after Sorting by Name");
						System.out.println();

						for (String empName : tempName) {
							System.out.println(empName);
						}
					}
						break;
					case 2: {
						}
						break;
					}
				} while (sortChoice != 3);

			}
				break;
			case 6: {
				System.out.print("Thank You!!!");
			}
				break;
			default: {
				System.out.println("Enter valid choice!!!");
			}
			}
		} while (choice != 6);
	}
}
