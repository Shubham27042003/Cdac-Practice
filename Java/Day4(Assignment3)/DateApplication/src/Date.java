
public class Date {

	private int day=1;
	private int month=1;
	private int year=2025;
	
	public Date() {
	}
	
	public Date(int day,int month,int year) {
		setDate(day,month,year);
	}
	
	
	public int getDay() {
		return day;
	}
	
	public int getMonth() {
		return month;
	}
	
	public int getYear() {
		return year;
	}
	
	
	
	public void setDate(int day,int month,int year)
	{
		if(year<1900 || year>2500) {
			this.year=2025;
		}else {
			this.year=year;
		}
		
		if(month<1 || month>12)
		{
			this.month=1;
		}else {
			this.month=month;
		}
		
		
		
		if(day<1 || day >31)
		{
			switch(this.month)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
				if(day<1 || day >31) {
					this.day=1;
				}
			}
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			{
				if(day<1 || day >30) {
					this.day=1;
				}
			}
			break;
			case 2:
			{
				if(isLeap(this.year) && day<1 || day>29) {
					this.day=1;
				}else if(isLeap(this.year) && day<1 || day>28) {
					this.day=1;
				}
			}
			
			break;
			}
			
		}else {
			this.day=day;
		}
	
		
	}


	public void addDays(int days) {
		int day=0,month = 0,year=0;
		int tempDays=this.day+days;
		
		if(isLeap(this.year) && tempDays>366)
		{
			year=this.year+(tempDays/366);
			tempDays%=366;
		}else if(tempDays>365) 
		{
			year=this.year+(tempDays/365);
			tempDays%=365;
		}else {
			year=this.year;
		}
		
		
		
		switch(this.month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if(tempDays>31)
			{
				month=this.month+(tempDays/31);
				if(month>12)
				{
					month/=12;
				}
				tempDays=(tempDays%31)+1;
			}else {
				month=this.month;
			}
		}
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if(tempDays>30)
			{
				month=this.month+(tempDays/30);
				tempDays=(tempDays%30)-1;
			}else {
				month=this.month;
			}
		}
		break;
		case 2:
		{
			if(isLeap(this.year))
			{
				if(tempDays>29)
				{
					month=this.month+(tempDays/29);
					tempDays%=29;
				}
				else {
					month=this.month;
				}
			}else {
				if(tempDays>28)
				{
					month=this.month+(tempDays/28);
					tempDays%=28;
				}else {
					month=this.month;
				}
			}
		}
		
		
	}
		day=tempDays;
		setDate(day,month,year);
		
}
		

		
	
	
	
	
	
	public boolean isLeap(int year)
	{
		if(year%4==0 && year%100==0)
		{
			if(year%400==0)
			{
				return true;
			}
		}else if(year%4==0)
		{
			return true;
		}
		return false;
	}


	public void addMonths(int months) {
		int tempMonths,day,month,year;
		tempMonths=this.month+months;
		
		if(tempMonths>12)
		{
			year=this.year+(tempMonths/12);
			tempMonths%=12;
		}else {
			year=this.year;
		}
		
		month=tempMonths;
		day=this.day;
		
		setDate(day,month,year);
		
	}


	public void addYears(int years) {
		setDate(this.day,this.month,this.year+years);
		
	}


	public boolean compareDates(int days, int months, int years) {
		int day=30;
		int month=9;
		int year=2025;
		
		setDate(days,months,years);
		if(day==this.day && month==this.month && year==this.year) {
			return true;
		}
		return false;
	}
	
	
}
