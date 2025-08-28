/*Day4 assignments
1. Write a class Aarray2D to store all functions related to 2D array.
refer the demo for 2D array
make all functions within the class static
Store the class in file Array2D.cpp, write another file TestArray2D.cpp
store main function in this file. 
Write a menu driven program to do the following, 
result of every function should be displayed in main
1. add 2 matrices
2. transpose of matric
3. multiplication of 2 matrices
4. find sum of all values
5. find maximum number
6. find minimum number
7. find rowwise minimum
8. find rowwise maximum
9. find rowwise sum
10. find columnwise maximum
11. find columnwise minimum
12. find columnwise sum
*/

#include<iostream>
const int ROWS=3;
const int COLS=3;
using namespace std;
class Array2D{
	public:
		//Accept the elements of matrix
		static void accept(int arr[ROWS][COLS]){
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					cin>>arr[i][j];
				}
			}
			
		}
		
		
		//Display the elements of matrix
		static void display(int arr[ROWS][COLS]){
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}
			
		}
		
		//Addition of two matrices
		static void addition(int arr1[ROWS][COLS],int arr2[ROWS][COLS],int result[ROWS][COLS]){
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					result[i][j]=arr1[i][j]+arr2[i][j];
				}
			}
		}
		
		//Addition of two matrices with the Array as a return type
		static int ** additionWithPTR(int arr1[ROWS][COLS],int arr2[ROWS][COLS]){
			int **arr;
			arr=new int*[ROWS];
						
			for(int i=0;i<ROWS;i++){
				arr[i]=new int[COLS];
				for(int j=0;j<COLS;j++){
					
					arr[i][j]=arr1[i][j]+arr2[i][j];
				}
			}
			return arr;
		}
		
		
		//Transpose of matrix
		static void transpose(int arr[ROWS][COLS],int result[ROWS][COLS]){
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					result[i][j]=arr[j][i];
				}
			}
		}
		
		
		//Multiplication of two matrices
		static void multiplication(int arr1[ROWS][COLS],int arr2[ROWS][COLS],int result[ROWS][COLS]){
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					result[i][j]=0;
					for(int k=0;k<COLS;k++){
						result[i][j]+=arr1[i][k]*arr2[k][j];
					}
				}
			}
		}
		
		//Addition of all the elements in matrix
		static int sumOfAll(int arr[ROWS][COLS]){
			int sum=0;
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					sum+=arr[i][j];
				}
			}
			return sum;
		}
		
		//Maximum element from the matrix
		static int findMax(int arr[ROWS][COLS]){
			int max=arr[0][0];
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					if(arr[i][j]>max){
						max=arr[i][j];
					}
				}
			}
			return max;
		}
		
		
		//Minimum element from the matrix
		static int findMin(int arr[ROWS][COLS]){
			int min=arr[0][0];
			for(int i=0;i<ROWS;i++){
				for(int j=0;j<COLS;j++){
					if(arr[i][j]<min){
						min=arr[i][j];
					}
				}
			}
			return min;
		}
		
		
		//Rowwise Minimum element from the matrix
		static void rowwiseMin(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<ROWS;i++){
				int rMin=arr[i][0];
				for(int j=0;j<COLS;j++){
					if(arr[i][j]<rMin){
						rMin=arr[i][j];
					}
				}
				result[i]=rMin;
			}
			
		}
		
		
		
		//Rowwise maximum element from the matrix
		static void rowwiseMax(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<ROWS;i++){
				int rMax=arr[i][0];
				for(int j=0;j<COLS;j++){
					if(arr[i][j]>rMax){
						rMax=arr[i][j];
					}
				}
				result[i]=rMax;
			}
			
		}
		
		
		//Rowwise sum of elements from the matrix
		static void rowwiseSum(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<ROWS;i++){
				int rSum=0;
				for(int j=0;j<COLS;j++){
					rSum+=arr[i][j];
				}
				result[i]=rSum;
			}
			
		}
		
		
		//Columnwise Minimum element from the matrix
		static void columnwiseMin(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<COLS;i++){
				int cMin=arr[0][i];
				for(int j=0;j<ROWS;j++){
					if(arr[j][i]<cMin){
						cMin=arr[j][i];
					}
				}
				result[i]=cMin;
			}
			
		}
		
		
		//Columnwise maximum element from the matrix
		static void columnwiseMax(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<COLS;i++){
				int cMax=arr[0][i];
				for(int j=0;j<ROWS;j++){
					if(arr[j][i]>cMax){
						cMax=arr[j][i];
					}
				}
				result[i]=cMax;
			}
			
		}
		
		
		//Columnwise Sum of elements from the matrix
		static void columnwiseSum(int arr[ROWS][COLS],int *result){
			
			for(int i=0;i<COLS;i++){
				int cSum=0;
				for(int j=0;j<ROWS;j++){
					cSum+=arr[j][i];
					
				}
				result[i]=cSum;
			}
			
		}

	
	
};
