import java.util.Scanner;
public class QutientAndRemainder{
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the numerator");
        int numerator = scanner.nextInt();

        System.out.println("Enter the denominator");
        int denominator = scanner.nextInt();

        int qoutient = numerator/denominator;

        int remainder = numerator%denominator;

        System.out.println("Quotient is " + qoutient);
        System.out.println("Remainder is " + remainder);

        scanner.close();

    }
}
