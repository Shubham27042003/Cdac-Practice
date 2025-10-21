
public class MultiplyCorresponding {

	public   static int [] multiplyCorrespondingElement(int arr1[],int[] arr2){
		int length=arr1.length;
		int newArr[]=new int[length];
		
		for(int iTemp=0;iTemp<length;iTemp++) {
			newArr[iTemp]=arr1[iTemp]*arr2[iTemp];
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
		int[] arr1= {1, 3, -5, 4};                                                  
                
		int[] arr2= {1, 4, -5, -2};

		System.out.println("Array1");
		display(arr1);
		System.out.println("Array2");
		display(arr2);
		int []arrfinal=multiplyCorrespondingElement(arr1,arr2);
		System.out.println("Result");
		display(arrfinal);
	}
}
