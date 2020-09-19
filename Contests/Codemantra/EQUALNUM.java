package Contests.Codemantra;

import java.io.*;
import java.util.*;
import java.lang.*;

/**
 * EQUALNUM
 */
public class EQUALNUM {

  public static void main(String[] args) {
    BufferedReader br = new BufferedReader(new java.io.InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    while (t-- > 0) {
      String s[] = br.readLine().split(" ");
      String s1 = s[0];
      String s2 = s[1];
      s1.replace(",", "");
      s2.replace(",", "");
      if (s1.equals(s2))
        System.out.println("equal");
      else
        System.out.println("different");

    }
  }
}