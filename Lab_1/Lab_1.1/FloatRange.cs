namespace Lab_1._1;

public class FloatRange
{
    private double First { get; set; }
    private double Second { get; set; }
    public bool Init(double first, double second)
    {
        if (first < second)
        {
            this.First = first;
            this.Second = second;
            return true;
        }
        else
        {
            Console.WriteLine("Error, first value is not < second value");
            return false;
        }
    }


    public void Read()
    {
        double firstValue;
        double secondValue;
        do
        {
            Console.Write("Enter first value: ");
            firstValue = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter second valueя: ");
            secondValue = Convert.ToDouble(Console.ReadLine());
        }
        while (!Init(firstValue, secondValue));
    }

    public void Display()
    {
        Console.WriteLine($"First value: {First}");
        Console.WriteLine($"Second value: {Second}");
    }

    public bool RangeСheck(double x)
    {
        return (First <= x && x <= Second);      
    }
}
