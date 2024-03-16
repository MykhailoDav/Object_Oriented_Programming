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


    public static void Read(FloatRange floatRange)
    {
        floatRange.Read();
    }

    public static void Display(FloatRange floatRange)
    {
        floatRange.Display();
    }
    public static FloatRange operator +(FloatRange x, FloatRange y)
    {
        return new FloatRange(x.First + y.Second, x.First + y.Second);
    }
    public static FloatRange operator -(FloatRange x, FloatRange y)
    {
        return new FloatRange(x.First - y.Second, x.First - y.Second);
    }

    public static FloatRange operator *(FloatRange x, FloatRange y)
    {
        return new FloatRange(x.First * x.Second, y.First * y.Second);
    }

    public static FloatRange operator /(FloatRange x, FloatRange y)
    {
        if (y.First == 0 || y.Second == 0)
        {
            Console.WriteLine("Division by zero!");
            return new FloatRange();
        }
        return new FloatRange(x.First / y.First, x.Second / y.Second);
    }

    public static FloatRange operator ^(FloatRange x, int n)
    {
        FloatRange result = new FloatRange(1, 1);
        for (int i = 0; i < n; ++i)
        {
            result.First *= x.First;
            result.Second *= x.Second;
        }
        return result;
    }
    // Method for postfix increment (range++)
    public static FloatRange operator ++(FloatRange range)
    {
        range.Second++;
        return range;
    }
    // Method for postfix decrement (range--)
    public static FloatRange operator --(FloatRange range)
    {
        range.Second--;
        return range;
    }

    // Prefix increment operator (range++)
    public FloatRange PrefixIncrement()
    {
        FloatRange temp = new FloatRange(First, Second);
        First++;
        return temp;
    }
    // Prefix decrement operator (range--)
    public FloatRange PrefixDecrement()
    {
        FloatRange temp = new FloatRange(First, Second);
        First--;
        return temp;
    }

    // Conversion to string
    public static implicit operator string(FloatRange floatRange)
    {
        return $"First value: {floatRange.First}, Second value: {floatRange.Second}";
    }
}


