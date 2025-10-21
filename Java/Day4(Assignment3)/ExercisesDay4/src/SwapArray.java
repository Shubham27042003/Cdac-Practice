public class SwapArray {
	
	public   static int [] swapFirstLast(int arr[]){
		int length=arr.length;
		int newArr[]=new int[length];
		newArr[0]=arr[length-1];
		newArr[length-1]=arr[0];
		for(int iTemp=1;iTemp<length-1;iTemp++) {
			newArr[iTemp]=arr[iTemp];
		}
		return newArr;
			
	}
	public static void display(int arr[]) {
		for(int element:arr) {
			System.out.print(element+" ");
		}	
		System.out.println();
	} 
	public static void main(String[] args) {
		int arr[]=new int[] {20,30,40};
		System.out.println("Original Array");
		display(arr);
		int []arrfinal=swapFirstLast(arr);
		System.out.println("After Swap Array");
		display(arrfinal);
	}
}
