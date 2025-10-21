package org.cdac;

import java.util.Arrays;

public class ReplaceSubstring {

public static void main(String[] args) {
		
		String str="The quick brown fox jumps over the lazy dog.";
		String replace="fox";
		String replaceWith="cat";
		
		System.out.println("Before: "+str);
		String result=replaceWith(str,replace,replaceWith);
		System.out.println("Before: "+result);
	}

private static String replaceWith(String str, String replace, String replaceWith) {
	char[]tempStr=str.toCharArray();
	char[]tempReplaceWith=replaceWith.toCharArray();
	
	return str.replace(replace, replaceWith);
//	int index=str.indexOf(replace);
//	System.out.println("ind "+index);
//	for(int iTemp=index,j=0;iTemp<tempReplaceWith.length;iTemp++,j++)
//	{
//		tempStr[iTemp]=tempReplaceWith[j];
//	}
//	System.out.print(tempStr.toString());
//	return Arrays.toString(tempStr);
	
}
}
