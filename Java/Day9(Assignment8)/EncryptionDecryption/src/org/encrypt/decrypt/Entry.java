package org.encrypt.decrypt;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

import org.inout.ConsoleInput;

public class Entry {

	public static void main(String[] args) {

		System.out.println("Enter Path");
		String path = ConsoleInput.getString();

		int choice;
		do {
			System.out.println("1] write into file");
			System.out.println("2] Read from file");
			System.out.println("3] Exit");

			choice = ConsoleInput.getInt();

			if(choice==3)
				break;

			System.out.println("Enter File Name");
			String fileName = ConsoleInput.getString();
			
			
			File objFile = new File(path, fileName);

			switch (choice) {
			case 1: {
				writeData(objFile);
			}
				break;
			case 2: {
				readData(objFile);
			}
				break;
			default: {
				System.out.println("Enter valid Choice");
			}
			}

		} while (choice != 3);
	}

	private static void readData(File objFile) {
		try (FileInputStream fileStream = new FileInputStream(objFile)) {

			byte[] byteData = new byte[(int) objFile.length()];
			fileStream.read(byteData);
			String data = new String(byteData);
			String decryptData = EncryptionDescryption.decrypt(data);
			System.out.println(decryptData);
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

	private static void writeData(File objFile) {
		System.out.println("Enter Data");
		String data = ConsoleInput.getString();
		try (FileOutputStream fileStream = new FileOutputStream(objFile, true)) {
			String encryptData = EncryptionDescryption.encrypt(data);
			byte[] byteData = encryptData.getBytes();
			fileStream.write(byteData);
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}

}
