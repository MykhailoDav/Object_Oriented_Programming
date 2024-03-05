namespace Lab_1._7;

public class Bill
{
    public string LastName { get; set; }
    public string PhoneNumber { get; set; }
    public double MinuteRate { get; set; }
    public double Discount { get; set; }
    public Time StartTime { get; set; }
    public Time EndTime { get; set; }
    public double TotalAmount { get; private set; }

    public bool Init(string lastName, string phoneNumber, double minuteRate, double discount, Time startTime, Time endTime)
    {
        if (string.IsNullOrEmpty(lastName) || string.IsNullOrEmpty(phoneNumber) || minuteRate <= 0 || discount < 0 || discount > 100 || startTime == null || endTime == null)
        {
            Console.WriteLine("Invalid input! Please check your data.");
            return false;
        }

        LastName = lastName;
        PhoneNumber = phoneNumber;
        MinuteRate = minuteRate;
        Discount = discount;
        StartTime = startTime;
        EndTime = endTime;

        CalculateTotalAmount();
        return true;
    }

    public void Read()
    {
        bool initialized = false;
        do
        {
            Console.WriteLine("Enter details for bill:");
            Console.Write("Last Name: ");
            string lastName = Console.ReadLine();
            Console.Write("Phone Number: ");
            string phoneNumber = Console.ReadLine();
            Console.Write("Minute Rate: ");
            double minuteRate;
            double.TryParse(Console.ReadLine(), out minuteRate);
            Console.Write("Discount: ");
            double discount;
            double.TryParse(Console.ReadLine(), out discount);
            bool ifRepeat = false;
            Time startTime = new();
            Time endTime = new();
            do
            {
                Console.WriteLine("Enter start time: ");
                startTime.Read();
                Console.WriteLine("Enter end time: ");
                endTime.Read();
                /* if (!startTime.IsEqualTo(endTime))
                 {
                     ifRepeat = true;
                     Console.WriteLine("\n\tThe end time cannot be equal to the start time");
                 }*/
            } while (ifRepeat);
            initialized = Init(lastName, phoneNumber, minuteRate, discount, startTime, endTime);
        } while (!initialized);
    }
    public void Display()
    {

        Console.WriteLine($"Last Name: {LastName}");
        Console.WriteLine($"Phone Number: {PhoneNumber}");
        Console.WriteLine($"Minute Rate: {MinuteRate}");
        Console.WriteLine($"Discount: {Discount}");
        Console.WriteLine("Start Time: " + StartTime.ToString());
        Console.WriteLine("End Time: " + EndTime.ToString());
        Console.WriteLine($"Total Amount: {TotalAmount} UAH");
    }
    private void CalculateTotalAmount()
    {
        double durationInMinutes = (EndTime.Hour * 60) + EndTime.Minute + (EndTime.Second / 60) - ((StartTime.Hour * 60) + StartTime.Minute + (StartTime.Second / 60));
        if (durationInMinutes % 1 != 0) { durationInMinutes = (int)durationInMinutes++; }
        double totalCost = durationInMinutes * MinuteRate;
        double discountAmount = totalCost * (Discount / 100);
        TotalAmount = totalCost - discountAmount;
    }
    public override string ToString() => $"Last Name: {LastName}, Phone Number: {PhoneNumber}, Minute Rate: {MinuteRate}, Discount: {Discount}%, StartTime: {StartTime.ToString()}, EndTime: {EndTime.ToString()}, Total Amount: {TotalAmount} UAH";
}
