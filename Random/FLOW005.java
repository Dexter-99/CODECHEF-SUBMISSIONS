import java.util.Scanner;

/**
 * FLOW005
 */
public class FLOW005 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    int sum = n / 100;
    n = n % 100;
    sum += n / 50;
    n = n % 50;
    sum += n / 10;
    n = n % 10;
    sum += n / 5;
    n = n % 5;
    sum += n / 2;
    n = n % 2;
    sum += n / 1;
    System.out.println(sum);

  }
}