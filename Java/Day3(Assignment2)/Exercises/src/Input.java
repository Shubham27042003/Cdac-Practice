
public class Input {
	public static String getString()
	{
		try{
			byte[] arrayInput=new byte[100];
			int length=System.in.read(arrayInput);
			byte[] arrayFinal=new byte[length-2];
			System.arraycopy(arrayInput, 0, arrayFinal, 0, length-2);
			String objString=new String(arrayFinal);
			return objString;
		}catch(Exception e) {
			e.printStackTrace();
			return null;
		}
	}
	
	
	public static float getFloat()
	{
		return Float.parseFloat(getString());
	}
	
	public static int getInt()
	{
		return Integer.parseInt(getString());
	}

}
