import java.io.BufferedWriter;
import java.util.Arrays;

import org.omg.CORBA.PUBLIC_MEMBER;

/*
 * 二分法查找
 */

public class BinarySearch {

	/*
	 * int resultPosition; int resultSearchCount;
	 * 
	 * public static int generalSearch(int arr[],int searchWord) { int
	 * searchCount=0; for(int i=0;i<arr.length;i++) { searchCount++;
	 * if(arr[i]==searchWord) { break; } } return searchCount; }
	 * 
	 * public static void main(String[] args) { int arr[]=
	 * {234,789,76,890,572,98,234}; int searchWord=76; BinarySearch binarySearch=new
	 * BinarySearch();
	 * 
	 * binarySearch.generalSearch(arr, searchWord);
	 * System.out.println("普通循环查找到%d在位置%d需要的次数为%d",searchWord,,generalSearch(arr,
	 * searchWord)); System.out.println("二分法查找%d需要的次数为%d",searchWord); }
	 */
	public Result generalSearch(int arr[], int searchWord) {
		Result result = new Result();
		int searchCount = result.getSearchCount();
		int searchPosition = result.getSearchPosition();
		for (int i = 0; i < arr.length; i++) {
			searchCount++;
			if (arr[i] == searchWord) {
				searchPosition = i + 1;
				break;
			}
		}
		result.setSearchCount(searchCount);
		result.setSearchPosition(searchPosition);
		return result;
	}

	public Result binarySearch(int arr[],int searchWord) {
		Result result=new Result();
		int searchCount=result.getSearchCount();
		int searchPosition=result.getSearchPosition();
		Arrays.sort(arr);//对传进来的数组先排序
		System.out.println("二分法查找需要先进行排序，排序后的数组："+Arrays.toString(arr));
		int index=0;
		int iStart=0;
		int iEnd=arr.length-1;
		for(int i=0;i<arr.length/2;i++) {
			searchCount++;
			index=(iStart+iEnd)/2;
			if(arr[index]<searchWord) {
				iStart=index+1;
			}else if(arr[index]>searchWord) {
				iEnd=index-1;
			}else {
				searchPosition=index;
				break;
			}
		}
		result.setSearchCount(searchCount);
		result.setSearchPosition(searchPosition);
		return result;
	}

	public static void main(String[] args) {
		BinarySearch binarySearch = new BinarySearch();
		int arr[] = { 234, 789, 76, 890, 572, 98, 234 };
		int searchWord = 98;
		Result result1 = binarySearch.generalSearch(arr, searchWord);
		System.out.printf("普通循环查找到%d在位置%d需要的次数为%d\n", searchWord, result1.getSearchPosition(), result1.getSearchCount());

		Result result2=binarySearch.binarySearch(arr, searchWord);
		System.out.printf("二分法查找%d在位置%d需要的次数为%d\n",searchWord,result2.getSearchPosition(),result2.getSearchCount());
	}
}

class Result {
	private int searchCount;
	private int searchPosition;

	public int getSearchCount() {
		return searchCount;
	}

	public void setSearchCount(int searchCount) {
		this.searchCount = searchCount;
	}

	public int getSearchPosition() {
		return searchPosition;
	}

	public void setSearchPosition(int searchPosition) {
		this.searchPosition = searchPosition;
	}
}