import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

/**
 * SORTVASES
 */
class SORTVASES {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    int m = sn.nextInt();
    int ar[] = new int[n];
    for (int i = 0; i < n; i++) {
      ar[i] = sn.nextInt();
    }
    ArrayList<Pair> list = new ArrayList<Pair>(m);
    for (int i = 0; i < m; i++) {
      int x = sn.nextInt();
      int y = sn.nextInt();
      Pair temp = new Pair(x, y);
      list.add(temp);
    }
    for (int j = 0; j < list.size(); j++) {
      int a = list.get(j).x;
      int b = list.get(j).y;
      if (ar[a - 1] == a || ar[b - 1] == b) {
        continue;
      } else {
        // System.out.println(a + " " + b);
        int temp = ar[a - 1];
        ar[a - 1] = ar[b - 1];
        ar[b - 1] = temp;
      }
    }

    for (int i : ar)
      System.out.print(i + " ");
    int sum = 0;
    for (int i = 0; i < n;) {
      if (ar[i] != i + 1) {
        int temp = ar[i];
        ar[i] = ar[temp - 1];
        ar[temp - 1] = temp;
        sum++;
        if (Pair.searchList(list, i + 1, temp)) {
          sum--;

        }
      } else {
        i++;
      }
    }
    System.out.println(sum);

  }
}

class Pair {
  int x;
  int y;

  public Pair(int x, int y) {
    this.x = x;
    this.y = y;
  }

  public static boolean searchList(ArrayList<Pair> p, int first, int second) {
    for (int i = 0; i < p.size(); i++) {
      if (p.get(i).x == first && p.get(i).y == second)
        return true;
    }
    return false;
  }
}
