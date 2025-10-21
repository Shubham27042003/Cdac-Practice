
public class Entry {

	public static void main(String[] args) {
		
		int choice,num1,num2,result1;
		float number1,number2,result2;
		do {
			System.out.println("1]Addition of Two Integer.");
			System.out.println("2]Addition of Two Float.");
			System.out.println("3]Subtraction of Two Integer.");
			System.out.println("4]Subtraction of Two Float.");
			System.out.println("5]Multiplication of Two Integer.");
			System.out.println("6]Multiplication of Two Float.");
			System.out.println("7]Division of Two Integer.");
			System.out.println("8]Division of Two Float.");
			System.out.println("9]Exit.");
			System.out.println("Enetr your Choice ");
			choice=ConsoleInput.getInt();
			
			switch(choice)
			{
				case 1:
				{
					System.out.println("Enter First Number");
					num1=ConsoleInput.getInt();
					System.out.println("Enter Second Number");
					num2=ConsoleInput.getInt();
					result1=Calculator.add(num1, num2);
					System.out.println("Result : "+result1);
				}
				break;
				case 2:
				{
					System.out.println("Enter First Number");
					number1=ConsoleInput.getFloat();
					System.out.println("Enter Second Number");
					number2=ConsoleInput.getFloat();
					result2=Calculator.add(number1, number2);
					System.out.println("Result : "+result2);
					
				}
				break;
				case 3:
				{
					System.out.println("Enter First Number");
					num1=ConsoleInput.getInt();
					System.out.println("Enter Second Number");
					num2=ConsoleInput.getInt();
					result1=Calculator.subtract(num1, num2);
					System.out.println("Result : "+result1);
					
				}
				break;
				case 4:
				{
					System.out.println("Enter First Number");
					number1=ConsoleInput.getFloat();
					System.out.println("Enter Second Number");
					number2=ConsoleInput.getFloat();
					result2=Calculator.subtract(number1, number2);
					System.out.println("Result : "+result2);
					
				}
				break;
				case 5:
				{
					System.out.println("Enter First Number");
					num1=ConsoleInput.getInt();
					System.out.println("Enter Second Number");
					num2=ConsoleInput.getInt();
					result1=Calculator.multiply(num1, num2);
					System.out.println("Result : "+result1);
					
				}
				break;
				case 6:
				{
					System.out.println("Enter First Number");
					number1=ConsoleInput.getFloat();
					System.out.println("Enter Second Number");
					number2=ConsoleInput.getFloat();
					result2=Calculator.multiply(number1, number2);
					System.out.println("Result : "+result2);
				}
				break;
				case 7:
				{
					System.out.println("Enter First Number");
					num1=ConsoleInput.getInt();
					System.out.println("Enter Second Number");
					num2=ConsoleInput.getInt();
					result1=Calculator.divide(num1, num2);
					System.out.println("Result : "+result1);
				}
				break;
				case 8:
				{
					System.out.println("Enter First Number");
					number1=ConsoleInput.getFloat();
					System.out.println("Enter Second Number");
					number2=ConsoleInput.getFloat();
					result2=Calculator.divide(number1, number2);
					System.out.println("Result : "+result2);
				}
				break;
				case 9:
				{
					System.out.println("Thank you!!!");
				}
				break;
				default:
				{
					System.out.println("Enter valid choice!!");
				}
				break;
			}
			
		}while(choice!=9);

	}

}
