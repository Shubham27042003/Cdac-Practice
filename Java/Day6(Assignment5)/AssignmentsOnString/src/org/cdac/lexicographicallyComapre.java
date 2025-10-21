package org.cdac;

public class lexicographicallyComapre {

	public static void main(String[] args) {
		String str1="This is Exercise 1 ";
		String str2="This is Exercise 2 ";
		int result=compareStrings(str1,str2);
		
		if(result<0) {
			System.out.println("This is Exercise 1 is less than This is Exercise 2");
		}else if(result>0)
		{
			System.out.println("This is Exercise 1 is greater than This is Exercise 2");	
		}else {
			System.out.println("This is Exercise 1 is equal to This is Exercise 2");
		}

	}
	
	public static int compareStrings(String str1,String str2)
	{
		if(str1.length()==str2.length() && str1.compareTo(str2)==0)
		{
			return 0;
		}else if(str1.length()==str2.length() && str1.compareTo(str2)<0)
		{
			return -1;
		}else {
			return 1;
		}
		
	}

}
