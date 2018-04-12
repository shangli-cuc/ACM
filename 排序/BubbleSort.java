import java.time.format.TextStyle;
import java.util.Arrays;

import javax.naming.ldap.SortControl;

/*
 * 冒泡排序，从小到大
 */
public class BubbleSort {
	/*public void main() {
		int values[]= {4,7,10,2,0,6,4,3,1,3};
		W w=new W();
		w.paixu(values);
//		sort(values);
		System.out.println(Arrays.toString(values));
	}*/
	public static void main(String[] args) {
		int values[]= {4,7,10,2,0,6,4,3,1,3};
//		W w=new W();
//		w.paixu(values);
		sort(values);
		System.out.println(Arrays.toString(values));
	}
	
	public static void sort(int x[]) {
		int temp;
		for(int i=0;i<x.length;i++) {
			for(int j=0;j<x.length-i-1;j++) {
				if(x[j]>x[j+1]) {
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}
	}
}


/*class W{
	public void paixu(int x[]) {
		int temp;
		for(int i=0;i<x.length;i++) {
			for(int j=0;j<x.length-i-1;j++) {
				if(x[j]>x[j+1]) {
					temp=x[j];
					x[j]=x[j+1];
					x[j+1]=temp;
				}
			}
		}
	}
}*/