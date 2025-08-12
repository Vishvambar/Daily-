
import java.util.Scanner;

public class sum_of_digits{
	
	public static void sumOfDigits(int number) {
		int sum =0 ;
	
		while (number > 0 ) {
			 sum += number%10;
            number = number/10;
            
            
		}
		
		System.out.println("Sum of digits = "+sum);
	}
	public static void main(String args[]) {
	System.out.println("Enter NUmber : ");
	
	Scanner input = new Scanner(System.in);
	
	int number = input.nextInt();
	
	sumOfDigits(number);
	}
}

