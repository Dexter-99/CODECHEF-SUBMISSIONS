import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 * CORUS
 */
public class CORUS {

  public static void main(String[] args) {
    Scanner sn = new Scanner(System.in);
    int n = sn.nextInt();
    int k = sn.nextInt();
    sn.nextLine();
    String s = sn.nextLine();
    HashMap<Character, Integer> charCountMap = new HashMap<Character, Integer>();

    char[] strArray = s.toCharArray();
    for (char c : strArray) {
      if (charCountMap.containsKey(c)) {
        charCountMap.put(c, charCountMap.get(c) + 1);
      } else {
        charCountMap.put(c, 1);
      }
    }
    long sum = 0;
    for (char key : charCountMap.keySet()) {
      {
        int freq = charCountMap.get(key);
        if (freq > k)
          sum += freq - k;
      }

    }
    System.out.println(sum);
  }
}