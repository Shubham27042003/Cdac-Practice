
public class UserInputSumTest {

	public static void main(String[] args) {
		int numbers,sum;
		System.out.println("Enter total numbers to be enter");
		numbers=Input.getInt();
		int  array[]=new int[numbers];
		
		UserInputSum.accept(array);
		UserInputSum.display(array);
		sum=UserInputSum.add(array);
		System.out.println("Total of values is : "+sum);
	}

}
