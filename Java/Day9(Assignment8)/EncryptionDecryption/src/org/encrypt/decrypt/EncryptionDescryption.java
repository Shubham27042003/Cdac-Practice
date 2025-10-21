package org.encrypt.decrypt;

import java.util.Arrays;

public class EncryptionDescryption {

	public static String encrypt(String data)
	{
		String result="";
		char[] charArray=data.toCharArray();
		

		for(int iTemp=0;iTemp<charArray.length;iTemp++)
		{
			if(charArray[iTemp]==' ')
				result=result+'*';
			else
				result=result+(char) ((int)charArray[iTemp]+15);
		}
		
		return result;
		
	}
	
	
	public static String decrypt(String data)
	{
		String result="";
		char[] charArray=data.toCharArray();
		
		for(int iTemp=0;iTemp<charArray.length;iTemp++)
		{
			if(charArray[iTemp]=='*')
				result+=' ';
			else
				result+=(char) ((int)charArray[iTemp]-15);
		}
		
		
		return result;
		
	}
	
}
