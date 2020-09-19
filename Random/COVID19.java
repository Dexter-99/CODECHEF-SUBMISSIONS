import java.util.ArrayList;
import java.util.Scanner;

/**
 * COVID19
 */
public class COVID19 {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    // int n = sn.nextInt();
    int a[] = { 1, 3, 5 };
    ArrayList<Integer> list = new ArrayList<>();
    int res = 0;
    int count = 1;
    for (int i = 1; i < a.length; i++) {
      if (a[i] - a[res] <= 2) {
        count++;
      } else {
        list.add(count);
        count = 1;
      }
      res = i;
    }
    list.add(count);
    int min = Integer.MAX_VALUE;
    int max = Integer.MIN_VALUE;
    for (Integer p : list) {
      System.out.print(p + " ");
      min = Math.min(min, p);
      max = Math.max(max, p);
    }
    System.out.println(min + " " + max);
  }
}