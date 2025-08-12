import java.util.Scanner;

public class palindrome {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter 2 Strings to check whether it is palindrome  or not : ");
        String Input1 = input.next();
        String Input2 = input.next();
        if (Input1.length() != Input2.length()) {
            System.out.println("Strings are not Palindrome!");
        } else {

            StringBuilder sb = new StringBuilder(Input1);
            String reverse = sb.reverse().toString();
            if (reverse.equals(Input2)) {
                System.out.println("Strings are Palindrome !");
            }
            else {
                System.out.println("Strings are not Palindrome!");
            }
        }

        input.close();
    }
}