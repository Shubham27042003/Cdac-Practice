package org.cdac;

import org.inout.ConsoleInput;

public class FindCharacter {
	public static char getCharacter(String strName,int index) {
		if(strName.isEmpty() || index < 0 || index >= strName.length()) {
			return 'N';
		}
		return strName.charAt(index);
		}
	public static void main(String args[]) {
		String str = "Java Exercises!";
		System.out.println("Enter Index");
		int index=ConsoleInput.getInt();
		char ch=getCharacter(str,index);
		System.out.println("Character at position "+index+" Is "+ch);

		
	}
	

}
