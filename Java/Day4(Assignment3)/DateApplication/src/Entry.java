
public class Entry {

	public static void main(String[] args)
	{
		int choice;
		
		
		
		Date objDate=new Date();
		
				
		do {
			System.out.println("1] Set Date");
			System.out.println("2] Add Day");
			System.out.println("3] Add Month");
			System.out.println("4] Add Year");
			System.out.println("5] Compare Date");
			System.out.println("6] Exit");
			System.out.println("Enter your Choice");
			choice=ConsoleInput.getInt();
			
			switch(choice)
			{
			case 1:
			{
				System.out.println("Enter day ");
				int day=ConsoleInput.getInt();
				System.out.println("Enter month ");
				int month=ConsoleInput.getInt();
				System.out.println("Enter year ");
				int year=ConsoleInput.getInt();
				objDate.setDate(day, month, year);
				System.out.println(objDate.getDay()+"/"+objDate.getMonth()+"/"+objDate.getYear());
			}
			break;
			case 2:
			{
				int days;
				System.out.println("Enter no. of days to add");
				days=ConsoleInput.getInt();
				objDate.addDays(days);
				System.out.println(objDate.getDay()+"/"+objDate.getMonth()+"/"+objDate.getYear());
			}
			break;
			case 3:
			{
				int months;
				System.out.println("Enter no. of monts to add");
				months=ConsoleInput.getInt();
				objDate.addMonths(months);
				System.out.println(objDate.getDay()+"/"+objDate.getMonth()+"/"+objDate.getYear());
			}
			break;
			case 4:
			{
				int years;
				System.out.println("Enter no. of years to add");
				years=ConsoleInput.getInt();
				objDate.addYears(years);
				System.out.println(objDate.getDay()+"/"+objDate.getMonth()+"/"+objDate.getYear());
			}
			break;
			case 5:
			{
				System.out.println("Enter day ");
				int days=ConsoleInput.getInt();
				System.out.println("Enter month ");
				int months=ConsoleInput.getInt();
				System.out.println("Enter year ");
				int years=ConsoleInput.getInt();
				boolean result=objDate.compareDates(days,months,years);
				System.out.println(result);
			}
			break;
			case 6:
			{
				System.out.println("Thank You!!");
				break;
				
			}
			default:
			{
				System.out.println("Enter Valid Input!!!");
			}
			}
		}while(choice!=6);
		
	}
}
