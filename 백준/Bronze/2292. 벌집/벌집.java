//package Algorithm;
import java.io.*;
import java.util.Arrays;
import java.util.Comparator;

public class Main {

	public static void main(String[] args) throws IOException {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	
	int n = Integer.parseInt(br.readLine());
	int cnt=1;
	int room = 2;
	
	if(n==1) {
		System.out.println("1");
	}
	else {
		while(room<=n) {
			room = room+(6*cnt);
			cnt++;
		}
		System.out.println(cnt);
	}
	
	
}
}