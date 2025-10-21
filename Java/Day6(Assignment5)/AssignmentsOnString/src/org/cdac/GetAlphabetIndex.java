package org.cdac;

public class GetAlphabetIndex {

	public static void main(String[] args) {
		
		String str="The quick brown fox jumps over the lazy dog.";
		getIndex(str);
	}

	private static void getIndex(String str) {
		char[] alphabets = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
				'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
		int[] alphaArray=new int[26];
		char[] tempString=str.toCharArray();
		for(int iTemp=0;iTemp<tempString.length;iTemp++)
		{
			if((int)tempString[iTemp]>=97 && (int)tempString[iTemp]<=122)
			{
				int asciValue=(int)tempString[iTemp];
				if(!(alphaArray[asciValue-97]>0))
				{
					alphaArray[asciValue-97]=iTemp;
				}
				
			}
		}
		
		for(int iTemp=0;iTemp<alphaArray.length;iTemp++)
		{
			System.out.println(alphabets[iTemp]+":"+alphaArray[iTemp]);
		}
		
	}


}
