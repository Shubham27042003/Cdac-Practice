package org.cdac;

public class ReverseString {

	public static void main(String[] args) {
		String str="The quick brown fox jumps";
		String result=reverseString(str);
		System.out.println(result);
	}

	private static String reverseString(String str) {
		char[] tempStr=str.toCharArray();
		int start=0;
		int end=tempStr.length-1;
		
		while(start<end) {
			char temp=tempStr[start];
			tempStr[start]=tempStr[end];
			tempStr[end]=temp;
			start++;
			end--;
		}
		return tempStr.toString();
	}

}
