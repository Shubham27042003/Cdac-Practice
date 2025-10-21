
public class TimeConversion {

	public static void convert(int sec)
	{
		int hour,minute,seconds;
		
		hour=sec/3600;
		sec%=3600;
		
		minute=sec/60;
		sec%=60;
		
		seconds=sec;
		
		System.out.println(hour+":"+minute+":"+seconds);
	}
	
	public static void main(String[] args)
	{
		System.out.println("Enter seconds ");
		int sec=Input.getInt();
		convert(sec);
	}
}
