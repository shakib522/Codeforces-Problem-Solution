import java.util.*;
 
public class Excercise {
 
	static Scanner scan = new Scanner(System.in);
 
	public static void main(String[] args) {
 
		int testcase = scan.nextInt();
		while (testcase-- > 0) {
			int h, m;
			String in = "";
			h = scan.nextInt();
			m = scan.nextInt();
			String opString = scan.nextLine();
			String ara = scan.nextLine();
			in += ara.charAt(0);
			in += ara.charAt(1);
			int hour = Integer.parseInt(in);
			String mString = "";
			mString += ara.charAt(3);
			mString += ara.charAt(4);
			int minit = Integer.parseInt(mString);
			//System.out.println("HM: "+minit+" "+hour);
			while (true) {
				//System.out.println("HM: "+hour+" "+minit);
				if (minit == m) {
					minit = 0;
					hour++;
				}
				if (hour == h) {
					hour = 0;
				}
				if (toara(hour) < m && toara(minit) < h) {
					System.out.println(good(hour) + ":" + good(minit));
					break;
				}
				minit++;
			}
		}
	}
 
	static int toara(int d) {
 
		String str = String.valueOf(d);
		if (str.length() == 1) {
			str = "0" + str;
		}
		String answ = "";
		for (int i = 1; i >= 0; --i) {
			char ch = str.charAt(i);
			if (ch == '7' || ch == '3' || ch == '4' || ch == '6'||ch=='9') {
				return 1000000;
			}
			if(ch=='2') {
				ch='5';
			}else if(ch=='5') {
				ch='2';
			}
			answ += ch;
		}
		int ans = Integer.parseInt(answ);
		return ans;
	}
 
	static String good(int x) {
		String ans = String.valueOf(x);
		if (x < 10) {
			ans = "0" + ans;
		}
		return ans;
	}
}
