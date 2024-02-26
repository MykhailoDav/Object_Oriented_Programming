namespace Lab_1_2;
public class Program
{
    static void Main(string[] args)
    {
        Fraction fraction = new();
        fraction.Read();
        fraction.Display();

        Console.WriteLine("\n Simplified fraction: ");
        fraction.Simplify();
        fraction.Display();

        Console.WriteLine($"\n" + fraction.Calculate());

        // MakeFraction
        {
            double Numerator;
            double Denominator;

            Console.Write("\nEnter Numerator: ");
            Numerator = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter Denominator: ");
            Denominator = Convert.ToDouble(Console.ReadLine());
            fraction = MakeFraction(Numerator, Denominator);

            fraction.Display();
        }
    }
    static Fraction MakeFraction(double first, double second)
    {
        Fraction fraction = new();
        if (!fraction.Init(first, second))
        {
            Console.WriteLine("Wrong arguments to Init!");
            return null;
        }
        else
        {
            return fraction;
        }

    }
}