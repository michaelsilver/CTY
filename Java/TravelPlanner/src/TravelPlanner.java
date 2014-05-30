import java.util.Scanner;

public class TravelPlanner {
	
	public static void main(String[] args)
	{
		int speed;
		int distance;
		char repeat;

		Scanner inp = new Scanner(System.in);
		
		System.out.print("Do you want to plan a trip? (Y or N) ");
		repeat = inp.nextInt();
		
		while (repeat == 'y' || repeat == 'Y')
		{
			System.out.print("\nEnter your speed in mph: ");
			speed = inp.nextInt();
		
			System.out.print("\nEnter your disance in miles: ");
			distance = inp.nextInt();

			System.out.print("\nAt " + speed + "mph, it will take\n" + distance / speed + " hours to travel " + distance + " miles.\n");

			System.out.print("\nDo you want to plan another trip? (Y or N) ");
			repeat = inp.nextInt();
		}
			
		
	}
}