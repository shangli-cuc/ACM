import java.io.BufferedWriter;
import java.util.Arrays;

import org.omg.CORBA.PUBLIC_MEMBER;

/*
 * ���ַ�����
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
	 * System.out.println("��ͨѭ�����ҵ�%d��λ��%d��Ҫ�Ĵ���Ϊ%d",searchWord,,generalSearch(arr,
	 * searchWord)); System.out.println("���ַ�����%d��Ҫ�Ĵ���Ϊ%d",searchWord); }
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
		Arrays.sort(arr);//�Դ�����������������
		System.out.println("���ַ�������Ҫ�Ƚ����������������飺"+Arrays.toString(arr));
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
		System.out.printf("��ͨѭ�����ҵ�%d��λ��%d��Ҫ�Ĵ���Ϊ%d\n", searchWord, result1.getSearchPosition(), result1.getSearchCount());

		Result result2=binarySearch.binarySearch(arr, searchWord);
		System.out.printf("���ַ�����%d��λ��%d��Ҫ�Ĵ���Ϊ%d\n",searchWord,result2.getSearchPosition(),result2.getSearchCount());
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