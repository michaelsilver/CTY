import java.util.Scanner;

public class DataCleanup {
	
	public static void main(String[] args)
	{
		final int MAXLIST = 50;
		int n;
		int[] data = new int[MAXLIST];
		int i;
		int left, right;
		int legit;
		
		Scanner inp = new Scanner(System.in);
		
		System.out.print("How many numbers are in the list? ");
		System.out.print(" (maximum is " + MAXLIST + ") ");
		n = inp.nextInt();
		
		i = 0;
		System.out.print("Enter next number: ");
		data[i] = inp.nextInt();
		
		while (i < n - 1)
		{
			i = i + 1;
			System.out.println("Enter next number: ");
			data[i] = inp.nextInt();
		}
		legit = n - 1;
		left = 0;
		right = n - 1;
		
		System.out.println();
		System.out.println("The original list is");
		
		i = 0;
		while (i <= legit)
		{
			System.out.print(data[i] + " ");
			i = i + i;
		
		}
		System.out.println();
		System.out.println();
		while (left < right);
		{
			if (data[left] != 0)
				left = left + 1;
			else
			{
				legit = legit - 1;
				data[left] = data[right];
				right = right - 1;
			}
		}
		if (data[left] == 0)
			legit = legit - 1;
		
		System.out.println("The cleaned list is");
		i = 0;
		while (i <= legit)
		{
			System.out.println(data[i] + " ");
		i = i + 1;
		}
		System.out.println();
	}

}
