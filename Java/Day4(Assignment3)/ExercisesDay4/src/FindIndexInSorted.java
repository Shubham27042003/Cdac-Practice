
public class FindIndexInSorted {
	
	public static int findIndex(int[] array, int target) {
		for(int i=0;i<array.length;i++)
		{
			if(array[i]==target)
			{
				return i;
			}
		}
		
		for(int i=0;i<array.length-1;i++)
		{
			if(array[i]<target && target<array[i])
			{
				return i;
			}
		}
		if(target<array[0])
		{
			return 0;
		}
		return array.length;
	}
	
	
	public static void main(String[] args) {
		
		int[] array= {1, 2, 4, 5, 6};
		int target=7;
		
		int index=findIndex(array,target);
		
		System.out.println(index);

	}

}
