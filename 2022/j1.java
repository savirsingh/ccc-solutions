import java.io.BufferedReader;
import java.io.InputStreamReader;

public class j1 {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
		int a = Integer.parseInt(br.readLine()); 
		int b = Integer.parseInt(br.readLine()); 
		int x = a*8;
		int y = b*3;
		int z = x+y;
		System.out.println(z-28);
 
	}

}
