using System;

namespace Lab_1._1;

public class FloatRange
{
    private double First { get; set; }
    private double Second { get; set; }

    public FloatRange(double first, double second)
    {
        if (first < second)
        {
            First = first;
            Second = second;
        }
        else
        {
            Console.WriteLine("Error, first value is not less than second value");
            // Setting default values if the condition is not met
            First = 0;
            Second = 0;
        }
    }

    public FloatRange()
    {
        // Default constructor without arguments
        First = 0;
        Second = 0;
    }

    // Copy constructor
    public FloatRange(FloatRange other)
    {
        First = other.First;
        Second = other.Second;
    }

    public void Read()
    {
        double firstValue;
        double secondValue;
        do
        {
            Console.Write("Enter first value: ");
            firstValue = Convert.ToDouble(Console.ReadLine());

            Console.Write("Enter second value: ");
            secondValue = Convert.ToDouble(Console.ReadLine());
        }
        while (firstValue >= secondValue);

        First = firstValue;
        Second = secondValue;
    }

    public void Display()
    {
        Console.WriteLine($"First value: {First}");
        Console.WriteLine($"Second value: {Second}");
    }

    public bool RangeCheck(double x)
    {
        return (First <= x && x <= Second);
    }

    // Friend functions for input/output
    public static void Read(FloatRange floatRange)
    {
        floatRange.Read();
    }

    public static void Display(FloatRange floatRange)
    {
        floatRange.Display();
    }

    // Operator overloading for prefix increment
    public static FloatRange operator ++(FloatRange floatRange)
    {
        floatRange.First++;
        return floatRange;
    }
    // Operator overloading for prefix decrement
    public static FloatRange operator --(FloatRange floatRange)
    {
        floatRange.First--;
        return floatRange;
    }

    // Conversion to string
    public static implicit operator string(FloatRange floatRange)
    {
        return $"First value: {floatRange.First}, Second value: {floatRange.Second}";
    }
}


