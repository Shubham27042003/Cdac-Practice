
public class UserInputSum {

	public static void accept(int[] array) {
		int length=array.length;
		
		for(int itemp=0;itemp<length;itemp++)
		{
			array[itemp]=Input.getInt();
		}
		
	}

	public static void display(int[] array) {
		
		for(int num:array)
		{
			System.out.print(num+" ");
		}
		System.out.println();
		
	}

	public static int add(int[] array) {
		int sum=0;
		for(int num: array)
		{
			sum+=num;
		}
		return sum;
	}

}
