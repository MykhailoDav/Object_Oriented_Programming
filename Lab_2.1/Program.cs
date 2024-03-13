namespace Lab_1._1;

public class Program
{
    static FloatRange MakeFloatRange(double first, double second)
    {
        return new FloatRange(first, second);
    }

    static void Main(string[] args)
    {
        FloatRange floatRange = new();
        FloatRange.Read(floatRange);
        FloatRange.Display(floatRange);
        double x;
        Console.Write("Enter number: ");
        x = Convert.ToDouble(Console.ReadLine());
        if (floatRange.RangeCheck(x))
        {
            Console.WriteLine("Number is in range");
        }
        else
        {
            Console.WriteLine("Number is not in range");
        }

        double firstValue;
        double secondValue;

        Console.Write("Enter first value: ");
        firstValue = Convert.ToDouble(Console.ReadLine());

        Console.Write("Enter second value: ");
        secondValue = Convert.ToDouble(Console.ReadLine());

        floatRange = MakeFloatRange(firstValue, secondValue);
        FloatRange.Display(floatRange);

        // Demonstrating prefix increment
        FloatRange incrementedFloatRange = ++floatRange;
        Console.WriteLine("After prefix increment:");
        Console.WriteLine(incrementedFloatRange);

        // Demonstrating postfix increment
        incrementedFloatRange = floatRange++;
        Console.WriteLine("After postfix increment:");
        Console.WriteLine(incrementedFloatRange);

        // Demonstrating prefix decrement
        FloatRange decrementedFloatRange = --floatRange;
        Console.WriteLine("After prefix decrement:");
        Console.WriteLine(decrementedFloatRange);

        // Demonstrating postfix decrement
        decrementedFloatRange = floatRange--;
        Console.WriteLine("After postfix decrement:");
        Console.WriteLine(decrementedFloatRange);
    }
}