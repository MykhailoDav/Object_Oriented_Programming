namespace Lab_1_2;

public class Fraction
{
    private double Numerator { get; set; }
    private double Denominator { get; set; }

    public bool Init(double Numerator, double Denominator)
    {
        if (Denominator != 0)
        {
            this.Numerator = Numerator;
            this.Denominator = Denominator;
            return true;
        }
        else
        {
            Console.WriteLine("Error, the denominator cannot be equal to 0");
            return false;
        }
    }
    public void Read()
    {
        double firstValue;
        double secondValue;
        do
        {
            Console.Write("Enter Numerator: ");
            firstValue = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Denominator: ");
            secondValue = Convert.ToDouble(Console.ReadLine());
        }
        while (!Init(firstValue, secondValue));
    }
    public void Display()
    {
        Console.WriteLine("\n");
        Console.WriteLine($"Numerator =  {Numerator}");
        Console.WriteLine($"Denominator = {Denominator}");
    }
    public void Simplify()
    {
        double gcd = FindGreatestCommonDivisor(Numerator, Denominator);
        Numerator /= gcd;
        Denominator /= gcd;
    }
    private static double FindGreatestCommonDivisor(double a, double b)
    {
        while (b != 0)
        {
            double temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    public double Calculate()
    {
        return Numerator / Denominator;
    }
}
