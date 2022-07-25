// code by savir singh

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int Players = sc.nextInt();
		int Count = 0;
		int Goals = 0;
		int Fouls = 0;
		int StarPlayer = 0;
		while ( Count < Players) {
			Goals = sc.nextInt();
			Fouls = sc.nextInt();
			if (40<Goals*5-Fouls*3) {
				StarPlayer++;
			}
			Count++;
		}
		if (StarPlayer==Players) {
			System.out.println(StarPlayer+"+");
		} else {
			System.out.println(StarPlayer);
		}
	}
	

}
