// code by savir singh

import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int maximum = 0;
    String answer = "";

    for (int i = 0; i < N; i++){
      String name = sc.next();
      int bid = sc.nextInt();

      if (bid > maximum){
        maximum = bid;
        answer = name;
      }
    }

    System.out.println(answer);
    
    
  }
}
