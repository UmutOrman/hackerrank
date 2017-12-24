import java.util.*;

public class Solution {
	public enum Month{
		JANUARY (31, "01"),
		FEBRUARY (28, "02"),
		MARCH (31, "03"),
		APRIL (30, "04"),
		MAY (31, "05"),
		JUNE (30, "06"),
		JULY (31, "07"),
		AUGUST (31, "08"),
		SEPTEMBER(30, "09"),
		OCTOBER (31, "10"),
		NOVEMBER (30, "11"),
		DECEMBER (31, "12");
		
		private int daysInMonth;
		private final String monthNumber;
		
		Month(int daysInMonth, String monthNumber){
			this.daysInMonth = daysInMonth;
			this.monthNumber = monthNumber;
		}
		
		public int getDaysInMonth(){
			return this.daysInMonth;
		}
		
		public String getMonthNumber(){
			return this.monthNumber;
		}
		
		public void setDaysInMonth(int daysInMonth){
			this.daysInMonth = daysInMonth;		
		}
	}

    static String solve(int year){
        // Complete this function
    	String monthNumber;
    	String dayNumber;
    	String stringYear = Integer.toString(year);
    	String result = new String();
    	if(year < 1918){
    		if(year % 4 == 0){
    			int dayCount = 0;
    			for(Month month : Month.values()){
    				if(month == Month.FEBRUARY)
    					month.setDaysInMonth(29);    				    			
    				if(month.getDaysInMonth() + dayCount < 256)
    					dayCount+= month.getDaysInMonth();    				    				
    				else{
    					dayNumber = Integer.toString(256 - dayCount);
    					monthNumber = month.getMonthNumber();
    					if(dayNumber.length() < 2)
    						dayNumber = "0" + dayNumber;    					
    					result = new String(dayNumber + "." + monthNumber + "." + stringYear);
    					break;
    				}
    			}
    		}
    		else{
    			int dayCount = 0;
    			for(Month month : Month.values()){    				    				    			
    				if(month.getDaysInMonth() + dayCount < 256)
    					dayCount+= month.getDaysInMonth();
    				else{
    					dayNumber = Integer.toString(256 - dayCount);
    					monthNumber = month.getMonthNumber();
    					if(dayNumber.length() < 2)
    						dayNumber = "0" + dayNumber;    					
    					result = new String(dayNumber + "." + monthNumber + "." + stringYear);
    					break;
    				}
    			}
    		}
    	}
    	else if(year == 1918){
    		int dayCount = 0;
    		for(Month month : Month.values()){
    			if(month == Month.FEBRUARY)
    				month.setDaysInMonth(15);
    			if(month.getDaysInMonth() + dayCount < 256)
					dayCount+= month.getDaysInMonth();
				else{
					dayNumber = Integer.toString(256 - dayCount);
					monthNumber = month.getMonthNumber();
					if(dayNumber.length() < 2)
						dayNumber = "0" + dayNumber;    					
					result = new String(dayNumber + "." + monthNumber + "." + stringYear);
					break;
				}
    		}
    	}
    	else{
    		if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
    			int dayCount = 0;
    			for(Month month : Month.values()){
    				if(month == Month.FEBRUARY)
    					month.setDaysInMonth(29);
    				if(month.getDaysInMonth() + dayCount < 256)
    					dayCount+= month.getDaysInMonth();
    				else{
    					dayNumber = Integer.toString(256 - dayCount);
    					monthNumber = month.getMonthNumber();
    					if(dayNumber.length() < 2)
    						dayNumber = "0" + dayNumber;    					
    					result = new String(dayNumber + "." + monthNumber + "." + stringYear);
    					break;
    				}
    			}
    		}
    		else{
    			int dayCount = 0;
    			for(Month month : Month.values()){    				
    				if(month.getDaysInMonth() + dayCount < 256)
    					dayCount+= month.getDaysInMonth();
    				else{
    					dayNumber = Integer.toString(256 - dayCount);
    					monthNumber = month.getMonthNumber();
    					if(dayNumber.length() < 2)
    						dayNumber = "0" + dayNumber;    					
    					result = new String(dayNumber + "." + monthNumber + "." + stringYear);
    					break;
    				}
    			}
    		}
    	} 
    	return result;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int year = in.nextInt();
        String result = solve(year);
        System.out.println(result);
    }
}

