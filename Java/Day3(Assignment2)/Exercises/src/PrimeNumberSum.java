
public class PrimeNumberSum {

	public static boolean isPrime(int num)
	{
		for(int i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				return false;
			}
		}
		return true;
	}
	public static int primeSum(int num)
	{
		int sum=0,count=0,i=2;
		
		while(count!=num) {
			if(isPrime(i))
			{
				System.out.println("prime"+i);
				sum+=i;
				count++;
			}
			i++;
		}
		
		return sum;
	}
	public static void main(String[] args) {
		int num,sum;
		System.out.println("Enter number ");
		num=Input.getInt();
		sum=primeSum(num);
		System.out.println("Sum of first "+num+" is "+sum);

	}

}
