using System.Collections.Generic;

namespace Lab_1._1;

public class Program
{
    static FloatRange MakeFloatRange(double first, double second)
    {
        FloatRange floatRange = new FloatRange();
        if (!floatRange.Init(first, second))
        {
            Console.WriteLine("Wrong arguments to Init!");
            return null;
        }
        else
        {
            return floatRange;
        }

    }
    static void Main(string[] args)
    {
        FloatRange floatRange = new();
        floatRange.Read();
        floatRange.Display();
        double x;
        Console.Write("Enter number: ");
        x = Convert.ToDouble(Console.ReadLine());
        if (floatRange.RangeСheck(x))
        {
            Console.WriteLine("Number is in range");
        }
        else { Console.WriteLine("Number is not in range"); }

        double firstValue;
        double secondValue;

        Console.Write("Enter first value: ");
        firstValue = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter second value: ");
        secondValue = Convert.ToDouble(Console.ReadLine());

        floatRange = MakeFloatRange(firstValue, secondValue);
        floatRange.Display();
    }
}