package org.utils;

import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

import java.util.ArrayList;

import org.core.Employee;

public class IOUtils {
	static ArrayList<Employee> empData = new ArrayList<>();
	public static void saveData(String filename,ArrayList<Employee> list) {
		try(ObjectOutputStream output = new ObjectOutputStream(new FileOutputStream(filename,true));) {
			for(Employee emp : list)
				output.writeObject(emp);
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	public static ArrayList<Employee> readData(String filename) {
		
		try (ObjectInputStream input = new ObjectInputStream(new FileInputStream(filename))) {
            
            while (true) {
                try {
                    // Casting to Employee is safe if only Employees were written
                	Employee emp = (Employee) input.readObject();
                	empData.add(emp);
                } catch (EOFException e) {
                    // This is the expected exception to signal the end of objects
                    System.out.println("--- End of File Reached ---");
                    break; 
                }
            }
            
        } catch (IOException | ClassNotFoundException e) {
            // Check if the exception is due to reading an empty file on first read.
            // If the file is empty, FileInputStream will fail before ObjectInputStream 
            // can be fully constructed, throwing a StreamCorruptedException or similar.
            // Or, if readObject() fails to read a valid object, it throws an exception.
            // We'll log the stack trace for any I/O or ClassNotFound errors.
            e.printStackTrace();
        }
		return empData;
		
	}
}
