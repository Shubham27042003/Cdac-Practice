#include<iostream>
#include"Array2D.cpp"
//const int ROWS=3;
//const int COLS=3;
using namespace std;
int main(){
	int arr1[ROWS][COLS],arr2[ROWS][COLS],result[ROWS][COLS];
	int result1[ROWS],result2[COLS];
	int ch,aSum,max,min;
	int **rArr;
	rArr=new int*[ROWS];
	
	//Accepting elements of matrices from user
	cout<<"Enter elements of matrix 1"<<endl;
	Array2D::accept(arr1);
	cout<<"Mtrix 1 is : "<<endl;
	Array2D::display(arr1);
	cout<<"Enter the elements of matrix 2"<<endl;
	Array2D::accept(arr2);	
	cout<<"Matrix 2 is : "<<endl;
	Array2D::display(arr2);	
	//Menu driven to choice one to user	
	do{
		cout<<endl;
		cout<<"1. add 2 matrices"<<endl;
		cout<<"2. transpose of matric"<<endl;
		cout<<"3. multiplication of 2 matrices"<<endl;
		cout<<"4. find sum of all values"<<endl;
		cout<<"5. find maximum number"<<endl;
		cout<<"6. find minimum number"<<endl;
		cout<<"7. find rowwise minimum"<<endl;
		cout<<"8. find rowwise maximum"<<endl;
		cout<<"9. find rowwise sum"<<endl;
		cout<<"10. find columnwise maximum"<<endl;
		cout<<"11. find columnwise minimum"<<endl;
		cout<<"12. find columnwise sum"<<endl;
		cout<<"13. addition of 2 matrices with array as return type"<<endl;
		cout<<"14. Exit"<<endl;
		
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		
		switch(ch){
			case 1:
				Array2D::addition(arr1,arr2,result);
				cout<<"Addition of two matrices is:"<<endl;
				Array2D::display(result);
				break;
			case 2:
				Array2D::transpose(arr1,result);
				cout<<"Transpose of matrix is"<<endl;
				Array2D::display(result);
				break;
			case 3:
				Array2D::multiplication(arr1,arr2,result);
				cout<<"Multiplication of two matrices is :"<<endl;
				Array2D::display(result);
				break;
			case 4:
				aSum=Array2D::sumOfAll(arr1);
				cout<<"Sum of all the values in matrix is : "<<aSum<<endl;
				break;
			case 5:
				max=Array2D::findMax(arr1);
				cout<<"Maximum number from the matrix is: "<<max<<endl;
				break;
			case 6:
				min=Array2D::findMin(arr1);
				cout<<"Minimum number from the matrix is : "<<min<<endl;
				break;
			case 7:
				Array2D::rowwiseMin(arr1,result1);
				cout<<"Rowwise minimum elements of matrix are"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Minimum element from the row "<<i+1<<" is: "<<result1[i]<<endl;
				}
				break;
			case 8:
				Array2D::rowwiseMax(arr1,result1);
				cout<<"Rowwise Maximum elements of matrix are"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Maximum element from the row "<<i+1<<" is: "<<result1[i]<<endl;
				}
				break;
			case 9:
				Array2D::rowwiseSum(arr1,result1);
				cout<<"Rowwise Sum of elements of matrix is"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Sum of elements from the row "<<i+1<<" is: "<<result1[i]<<endl;
				}
				break;
			case 10:
				Array2D::columnwiseMin(arr1,result2);
				cout<<"columnwise minimum elements of matrix are"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Minimum element from the column  "<<i+1<<" is: "<<result2[i]<<endl;
				}
				break;
			case 11:
				Array2D::columnwiseMax(arr1,result2);
				cout<<"columnwise maximum elements of matrix are"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Maximum element from the column  "<<i+1<<" is: "<<result2[i]<<endl;
				}
				break;
			case 12:
				Array2D::columnwiseSum(arr1,result2);
				cout<<"columnwise Sum of elements of matrix is"<<endl;
				for(int i=0;i<ROWS;i++){
					cout<<"Sum of elements from the column "<<i+1<<" is: "<<result2[i]<<endl;
				}
				break;
			case 13:
				rArr=Array2D::additionWithPTR(arr1,arr2);
				cout<<"Addition of two matrices is:"<<endl;
				for(int i=0;i<ROWS;i++){
					for(int j=0;j<COLS;j++){
						cout<<rArr[i][j]<<" ";
					}
					cout<<endl;
				}

				break;
			case 14:
				cout<<"Thank you !!!"<<endl;
				break;
				
			default:
				cout<<"Enter valid choice!!!"<<endl;
				break;
		}
	
		
	}while(ch!=14);
	return 0;
}
