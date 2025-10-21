
public class UniqueThreeDigitNumbers {
	
	public static void getUniqueNumbers(int[] array)
	{
		int count=-1;
		for(int i=1;i<=4;i++)
		{
			
			for(int j=1;j<=4;j++)
			{
				
				if(i!=j)
				{
					
					for(int k=1;k<=4;k++)
					{
						int num=0;
						num+=i*100;
						num+=j*10;
						if(k!=i && k!=j)
						{
							num+=k;
							array[++count]=num;
						}
						
					}
				}				
			}
			
		}
	}
	
	
	public static void display(int[] array)
	{
		for(int num:array)
		{
			System.out.print(num+" ");
		}
		System.out.println();
	}
	
	
	public static void main(String[] args)
	{
		int array[]=new int[24];
		
		getUniqueNumbers(array);
		
		int total=array.length;
		
		display(array);
		
		System.out.println("Total Unique numbers : "+total);
		
		
	}

}
