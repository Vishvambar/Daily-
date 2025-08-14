import java.util.Scanner;
class largest_3_sum_digit_number_in_string {
    public static String largestGoodInteger(String num) {
        String largest = "";

        for (int i = 0; i <= num.length() - 3; i++) {
            char c = num.charAt(i);
            // Check if the next two characters are the same as c
            if (c == num.charAt(i + 1) && c == num.charAt(i + 2)) {
                String seq = num.substring(i, i + 3);
                if (seq.compareTo(largest) > 0) {
                    largest = seq;
                }
            }
        }

        return largest;
    }

    public static void main(String args[]) {
        System.out.println("Enter Number");
        Scanner sc = new Scanner(System.in);
        String number = sc.next();
      String  largest =  largestGoodInteger(number);
       System.out.println(largest);
    }
}
