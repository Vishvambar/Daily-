import java.util.Arrays;
import java.util.Scanner;

public class anagram {
    public static void main(String args[]) {
        System.out.println("Enter two strings to check if they are anagram or not: ");
        Scanner input = new Scanner(System.in);
        String String1 = input.next();
        String String2 = input.next();

        if (String1.length() != String2.length()) {
            System.out.println("Strings are not anagram");
        } else {
            char[] arr1 = String1.toCharArray();
            char[] arr2 = String2.toCharArray();

            Arrays.sort(arr1);
            Arrays.sort(arr2);

            if (Arrays.equals(arr1, arr2)) {
                System.out.println("Strings are anagram");
            } else {
                System.out.println("Strings are not anagram");
            }
        }
        input.close();
    }
}
