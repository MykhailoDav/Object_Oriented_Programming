using Lab_1._8;
class Program
{
    static void Main(string[] args)
    {
        Bill bill = new();

        while (true)
        {
            Console.WriteLine("\nMENU:");
            Console.WriteLine("1. Initialize bill");
            Console.WriteLine("2. Display bill details");
            Console.WriteLine("3. Show Difference in seconds");
            Console.WriteLine("4. Show Difference in minutes");
            Console.WriteLine("5. Add seconds to end time");
            Console.WriteLine("6. Subtract seconds from end time");
            Console.WriteLine("7. Test equal");
            Console.WriteLine("8. To string");
            Console.WriteLine("9. Exit");
            Console.WriteLine("Enter your choice:");

            int choice = int.Parse(Console.ReadLine());

            switch (choice)
            {
                case 1:
                    bill.Read();
                    break;
                case 2:
                    bill.Display();
                    break;
                case 3:
                    Console.WriteLine(bill.StartTime.DifferenceInSeconds(bill.EndTime));
                    break;
                case 4:
                    Bill.Time diffTime = new Bill.Time(bill.StartTime.DifferenceInSeconds(bill.EndTime));
                    Console.WriteLine(diffTime.ToMinutes());
                    break;
                case 5:
                    Console.WriteLine("\nEnter seconds");
                    uint seconds = uint.Parse(Console.ReadLine());
                    bill.EndTime.AddSeconds(seconds);
                    break;
                case 6:
                    Console.WriteLine("\nEnter seconds");
                    uint sseconds = uint.Parse(Console.ReadLine());
                    bill.EndTime.SubtractSeconds(sseconds);
                    break;
                case 7:
                    Console.WriteLine(bill.StartTime.IsEqualTo(bill.EndTime));
                    break;
                case 8:
                    Console.WriteLine(bill.ToString());
                    break;
                case 9:
                    Console.WriteLine("Exiting...");
                    return;
                default:
                    Console.WriteLine("Invalid choice! Please enter a number between 1 and 9.");
                    break;
            }
        }

    }
}