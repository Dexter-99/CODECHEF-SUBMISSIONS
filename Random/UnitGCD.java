import java.util.ArrayList;
import java.util.Scanner;

/**
 * UnitGCD
 */
public class UnitGCD {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    int ar[] = new int[n];
    ArrayList<ArrayList<Integer>> pages = new ArrayList<>();
    for (int i = 0; i < n; i++) {
      ar[i] = sn.nextInt();
    }
    int a = n / 2;
    System.out.println(n / 2 + " ");

    ArrayList<Integer> list1 = new ArrayList<>();
    for (int i = 0; i <= 2; i++) {
      list1.add(ar[i]);
    }
    pages.add(list1);
    System.out.println();
    for (int i = 3; i < n; i = i + 2) {
      ArrayList<Integer> list2 = new ArrayList<>();
      for (int j = 0; j <= 1; j++) {
        if (i + j < n)
          list2.add(ar[i + j]);
      }
      pages.add(list2);
    }
    for (int i = 0; i < pages.size(); i++) {
      for (int j = 0; j < pages.get(i).size(); j++)
        System.out.print(pages.get(i).get(j) + " ");
      System.out.println();
    }
  }

  public static int euclidGCD(int a, int b) {
    if (b == 0) {
      return a;
    } else
      return euclidGCD(b, a % b);
  }
}