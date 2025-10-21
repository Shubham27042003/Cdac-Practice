package org.console;

import java.util.Scanner;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class Entry {

	public static void main(String[] args) {
		String[] fields = new String[1];

		int fieldCount = 0;

		String[] methods = new String[1];

		int methodCount = 0;

		Scanner scanner = new Scanner(System.in);

		System.out.println("Enter the package name");
		String packageName = scanner.nextLine();

		System.out.println("Enter the class Name");
		String className = scanner.nextLine();

		System.out.println("Choose access specifier");
		System.out.println("a. public b. default");
		char specifierChoice = scanner.next().charAt(0);
		scanner.nextLine();

		String classAccessSpecifier = (specifierChoice == 'a') ? "public " : "";

		int menuChoice;
		do {

			System.out.println("1. add field");
			System.out.println("2. add method");
			System.out.println("3. generate class");
			System.out.println("4. Exit");

			System.out.println("Enter your choice");

			menuChoice = scanner.nextInt();
			scanner.nextLine();

			switch (menuChoice) {
			case 1: {
				System.out.println("Enter the data type");
				String fieldDataType = scanner.nextLine();

				System.out.println("Enter the access specifier");
				String fieldAccessSpecifier = scanner.nextLine();

				if (fieldAccessSpecifier.equalsIgnoreCase("default"))
					fieldAccessSpecifier = "";

				System.out.println("enter the name of the variable");
				String fieldVariableName = scanner.nextLine();

				if (fieldCount == fields.length) {
					fields = growArray(fields);
				}
				fields[fieldCount++] = fieldAccessSpecifier + " " + fieldDataType + " " + fieldVariableName + ";";
			}
				break;
			case 2: {
				System.out.println("Enter the return type");
				String methodReturnType = scanner.nextLine();

				System.out.println("Enter the access specifier");
				String methodSpecifier = scanner.nextLine();
				if (methodSpecifier.equalsIgnoreCase("default"))
					methodSpecifier = "";

				System.out.println("Enter number of parameters");
				int numberOfParameters = scanner.nextInt();
				scanner.nextLine();

				String parameters = "";
				for (int iTemp = 1; iTemp <= numberOfParameters; iTemp++) {
					System.out.println("Enter parameter " + iTemp + " type:");
					String type = scanner.nextLine();

					System.out.println("Enter parameter " + iTemp + " name:");
					String paraname = scanner.nextLine();

					parameters = parameters + type + " " + paraname;
					if (iTemp < numberOfParameters - 1) {
						parameters += ",";
					}
				}

				System.out.println("enter name of the method");
				String methodName = scanner.nextLine();

				if (methodCount == methods.length) {
					methods = growArray(methods);
				}
				methods[methodCount++] = (methodSpecifier + " " + methodReturnType + " " + methodName + "(" + parameters
						+ "){\n\t\n\t}");

			}
				break;
			case 3: {
				write(packageName, className, classAccessSpecifier, fields, methods, fieldCount, methodCount);
			}
				break;
			case 4: {
				System.out.println("Exiting...");

			}
				break;
			default: {
				System.out.println("Invalid choice!");
			}
			}

		} while (menuChoice != 4);

		scanner.close();
	}

	private static String[] growArray(String[] oldArray) {
		int oldLength = oldArray.length;
		String[] tempArray = new String[oldLength + 1];
		System.arraycopy(oldArray, 0, tempArray, 0, oldLength);
		return tempArray;

	}

	private static void write(String packageName, String className, String classAccessSpecifier, String[] fields,
			String[] methods, int fieldCount, int methodCount) {
		File objFile = new File(className + ".java");
		try (PrintWriter writer = new PrintWriter(objFile)) {
			writer.println("package " + packageName + ";");
			writer.println(classAccessSpecifier + "class " + className + "{");

			for (int iTemp = 0; iTemp < fieldCount; iTemp++) {
				writer.println("\t" + fields[iTemp]);
			}

			writer.println();

			for (int iTemp = 0; iTemp < methodCount; iTemp++) {
				writer.println("\t" + methods[iTemp]);
				writer.println();
			}
			writer.println("}");
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
