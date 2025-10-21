
public class SortArray {

	public static void accept(int[] array)
	{
		for(int iTemp=0;iTemp<array.length;iTemp++)
		{
			System.out.println("Enter value");
			array[iTemp]=ConsoleInput.getInt();
		}
	}
	
	
	public static void display(int[] array)
	{
		for(int iTemp=0;iTemp<array.length;iTemp++)
		{
			System.out.print(array[iTemp]+" ");
		}
		System.out.println();
	}


	public static void sortAscending(int[] array) {
		int length=array.length;
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length-i-1;j++)
			{
				if(array[j]>array[j+1])
				{
					int temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
			}
		}
	}


	public static void sortDecending(int[] array) {
		int length=array.length;
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length-i-1;j++)
			{
				if(array[j]<array[j+1])
				{
					int temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
			}
		}
		
	}

}
