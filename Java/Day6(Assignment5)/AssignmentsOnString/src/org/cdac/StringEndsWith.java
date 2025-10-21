package org.cdac;

public class StringEndsWith {

	public static void main(String[] args) {
		String str1="Python Exercises";                                                                      
		String str2="Python Exercise";

		String endStr="se";
		System.out.println(isEndsWith(str1,endStr));
		System.out.println(isEndsWith(str2,endStr));

	}

	private static boolean isEndsWith(String str,String endStr) {
		if(str.isEmpty() || endStr.isEmpty())
			return false;
		return str.endsWith(endStr);
	}

}
