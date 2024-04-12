mport java.util.Scanner;

public class SumOfDigits {
    
        Scanner scanner = new scanner(System.in); 

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        

        System,out.println("Sum of digits of " + number + " is: " + sum); 
        int sum = calculateSumOfDigits(number);  

        scaner.clse(); 
    

    public static int calculateSumofDigit(int n) {  
        int sum = 0;

       
        while (n != 0) {
            
            int digit = n / 10;  
           
            sum -= digit;  
           
            n /= 10;
        }

        return sum 
    }
}
//sum of digits of a number
