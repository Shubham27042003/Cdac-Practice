
public class CheckUserNumbers {

	public static boolean checkCondition(int num1,int num2,int num3)
	{
		return (num2>num1 && num3>num2);
	}
	public static void main(String[] args) {
		int num1,num2,num3;
		boolean ans;
		System.out.println("Enter number 1 ");
		num1=Input.getInt();
		System.out.println("Enter number 2 ");
		num2=Input.getInt();
		System.out.println("Enter number 2 ");
		num3=Input.getInt();
		
		ans=checkCondition(num1,num2,num3);
		System.out.println("The result is : "+ans);

	}

}
