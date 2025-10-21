
public class SortArrayEntry {

	
	
	public static void main(String[] args) {
		int choice,totalNum;
		System.out.println("1. Enter the total numbers you wish to sort");
		totalNum=ConsoleInput.getInt();
		
		int[] array=new int[totalNum];
		
		do {
			System.out.println("1. Accept");
			System.out.println("2. Display");
			System.out.println("3. Sort in ascending order");
			System.out.println("4. Sort in descending order");
			System.out.println("5. Exit");
			System.out.print("Enter your choice");
			choice=ConsoleInput.getInt();
			
			switch(choice)
			{
			case 1:
			{
				SortArray.accept(array);
			}
			break;
			case 2:
			{
				SortArray.display(array);
			}
			break;
			case 3:
			{
				SortArray.sortAscending(array);
			}
			break;
			case 4:
			{
				SortArray.sortDecending(array);
			}
			break;
			}
		}while(choice!=5);
		


	}
}
