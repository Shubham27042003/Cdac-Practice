
public class FindOccurence {

	private static int findOccurence(int[] array, int target) {
		int count=0;
		for(int i=0;i<array.length;i++)
		{
			if(array[i]==target)
			{
				count++;
			}
		}
		return count;
	}
	
	
	public static void main(String[] args) {
		int[] array= {10,99,34,78,99,21,34,56,34,78};
		int target= 99;
		int occurence=findOccurence(array,target);
		System.out.println(target+" occures "+occurence+" times.");


	}

	

}
