
public class Numberpalindrome {
	
private static boolean isPalindome(int num) {
		String number=String.valueOf(num);
		int left=0;
		int right=number.length()-1;
		while(left<right)
		{
			if(number.charAt(left)!=number.charAt(right))
			{
				return false;
			}
			left++;
			right--;
		}
		return true;
	}

	public static void main(String[] args) {
		int num;
		System.out.println("Enter positive Number");
		num=ConsoleInput.getInt();
		
		boolean result=isPalindome(num);
		System.out.println(result);
	}

	

}
