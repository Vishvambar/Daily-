
import java.util.*;

 public class RunningSumOf1DArray {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] nums = new int[n];

        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        int[] runningSumArray = new int[n];
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            currentSum += nums[i]; 
            runningSumArray[i] = currentSum; 
        }

        System.out.println("\nRunning Sum Of Array is:");
        System.out.println(Arrays.toString(runningSumArray));
        
        sc.close();
    }
}