public class ConsoleInput {
	public static String getstring() {
		try {
		byte arrinitial[]=new byte[100];
		int length=System.in.read(arrinitial);
		byte arrfinal[]=new byte[length-2];
		System.arraycopy(arrinitial, 0, arrfinal, 0, length-2);
		
		String obj=new String(arrfinal);
		return obj;
	}catch(Exception e) {
		e.printStackTrace();
		return null;
	}
		
	}
	public static int getInt() {
		return Integer.parseInt(getstring());
	}
	

}
