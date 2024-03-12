//package Algorithm;
import java.io.*;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	StringTokenizer st = new StringTokenizer(br.readLine());
	
	int n = Integer.parseInt(st.nextToken());
	int k = Integer.parseInt(st.nextToken()); 

	System.out.println(fact(n)/(fact(k)*fact(n-k)));
	}
	

	static int fact(int num) {
		int result = 1;
		
		for(int i=1;i<=num;i++) {
			result*=i;
			
		}
		return result;
	}
	}

