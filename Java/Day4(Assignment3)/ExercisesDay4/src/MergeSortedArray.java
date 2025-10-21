
public class MergeSortedArray {

	public static void mergeArray(int[] array1, int[] array2, int[] result) {
		int length1=array1.length;
		int length2=array2.length;
		int indArr1=0,indArr2=0,indRes=0;
		while(indArr1<length1 && indArr2<length2)
		{
			if(array1[indArr1]<array2[indArr2]){
				result[indRes]=array1[indArr1];
				indArr1++;
				indRes++;
			}else {
				result[indRes]=array2[indArr2];
				indArr2++;
				indRes++;
			}
		}
		while(indArr1<length1)
		{
			result[indRes]=array1[indArr1];
			indArr1++;
			indRes++;
		}
		
		while(indArr2<length2)
		{
			result[indRes]=array2[indArr2];
			indArr2++;
			indRes++;
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
	
	
	public static void main(String[] args) {
		int[] array1 = {1,2,3,4};
		int[] array2 = {2,5,7, 8};
		int newLength=array1.length+array2.length;
		int[] result=new int[newLength];
		
		mergeArray(array1,array2,result);
		System.out.println("Merged array is");
		display(result);
		

	}

	

}
