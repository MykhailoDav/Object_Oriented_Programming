namespace Lab_1._3;

public class Program
{
    public static void Main(string[] args)
    {
        // Встановлюємо кодування консолі на UTF-8
        Console.OutputEncoding = System.Text.Encoding.UTF8;

        Console.WriteLine("\n\tВведіть дані для 1 об'єкту класу");
        Money money = new();
        money.Read();
        money.Display();
        Console.WriteLine("\n\tВиведення string:");
        Console.WriteLine(money.toString());
        Console.WriteLine(money.CalculateTotal());

        Console.WriteLine("\n\tВведіть дані для 2 об'єкту класу");

        Money money1 = new();
        money1.Read();
        money1.Display();
        Console.WriteLine(money1.CalculateTotal());

        Console.WriteLine("\n\tСума об'єктів = ");
        Money moneySum = new();
        moneySum = Money.Suma(money, money1);
        moneySum.Display();

        Console.WriteLine("\n\tРізниця об'єктів = ");
        Money moneySubtract = new();
        moneySubtract = Money.Subtract(money, money1);
        moneySubtract.Display();

        double x;
        Console.WriteLine("\n\tВвідіть множник");
        x = Convert.ToDouble(Console.ReadLine());
        Money moneyMultiplyByDecimal = new();
        moneyMultiplyByDecimal = money.MultiplyByDecimal(x);
        moneyMultiplyByDecimal.Display();

        {
            int _500hrn = 0;
            int _200hrn = 0;
            int _100hrn = 0;
            int _50hrn = 0;
            int _20hrn = 0;
            int _10hrn = 0;
            int _5hrn = 0;
            int _2hrn = 0;
            int _1hrn = 0;

            int _50kop = 0;
            int _25kop = 0;
            int _10kop = 0;
            int _5kop = 0;
            int _2kop = 0;
            int _1kop = 0;

            bool ifCont = true;
            do
            {

                Console.WriteLine("Кiлькість купюр якого номіналу ви хочете ввести, виберiть зi списку:\n");
                Console.WriteLine($"1. Кількість банкнот по 500 грн.");
                Console.WriteLine($"2. Кількість банкнот по 200 грн.");
                Console.WriteLine($"3. Кількість банкнот по 100 грн.");
                Console.WriteLine($"4. Кількість банкнот по 50 грн.");
                Console.WriteLine($"5. Кількість банкнот по 20 грн.");
                Console.WriteLine($"6. Кількість банкнот по 10 грн.");
                Console.WriteLine($"7. Кількість банкнот по 5 грн.");
                Console.WriteLine($"8. Кількість банкнот по 2 грн.");
                Console.WriteLine($"9. Кількість банкнот по 1 грн.");
                Console.WriteLine($"10. Кількість монет по 50 коп.");
                Console.WriteLine($"11. Кількість монет по 25 коп.");
                Console.WriteLine($"12. Кількість монет по 10 коп.");
                Console.WriteLine($"13. Кількість монет по 5 коп.");
                Console.WriteLine($"14. Кількість монет по 2 коп.");
                Console.WriteLine($"15. Кількість монет по 1 коп.");
                Console.WriteLine($"0. Продовжити :)");

                int choice = Convert.ToInt32(Console.ReadLine());


                switch (choice)
                {
                    case 1:
                        Console.WriteLine("Введіть кількість банкнот по 500 грн.: ");
                        _500hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 2:
                        Console.WriteLine("Введіть кількість банкнот по 200 грн.: ");
                        _200hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 3:
                        Console.WriteLine("Введіть кількість банкнот по 100 грн.: ");
                        _100hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 4:
                        Console.WriteLine("Введіть кількість банкнот по 50 грн.: ");
                        _50hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 5:
                        Console.WriteLine("Введіть кількість банкнот по 20 грн.: ");
                        _20hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 6:
                        Console.WriteLine("Введіть кількість банкнот по 10 грн.: ");
                        _10hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 7:
                        Console.WriteLine("Введіть кількість банкнот по 5 грн.: ");
                        _5hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 8:
                        Console.WriteLine("Введіть кількість банкнот по 2 грн.: ");
                        _2hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 9:
                        Console.WriteLine("Введіть кількість банкнот по 1 грн.: ");
                        _1hrn = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 10:
                        Console.WriteLine("Введіть кількість монет по 50 коп.: ");
                        _50kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 11:
                        Console.WriteLine("Введіть кількість монет по 25 коп.: ");
                        _25kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 12:
                        Console.WriteLine("Введіть кількість монет по 10 коп.: ");
                        _10kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 13:
                        Console.WriteLine("Введіть кількість монет по 5 коп.: ");
                        _5kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 14:
                        Console.WriteLine("Введіть кількість монет по 2 коп.: ");
                        _2kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 15:
                        Console.WriteLine("Введіть кількість монет по 1 коп.: ");
                        _1kop = Convert.ToInt32(Console.ReadLine());
                        break;
                    case 0:
                        ifCont = false;
                        break;
                    default:
                        Console.WriteLine("Неправильний вибір.");
                        break;
                }
            } while (ifCont);

            money = MakeMoney(_500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn, _50kop, _25kop, _10kop, _5kop, _2kop, _1kop);
            money.Display();
        }

        static Money MakeMoney(int _500hrn, int _200hrn, int _100hrn, int _50hrn, int _20hrn, int _10hrn, int _5hrn, int _2hrn, int _1hrn, int _50kop, int _25kop, int _10kop, int _5kop, int _2kop, int _1kop)
        {
            Money money = new();
            if (!money.Init(_500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn, _50kop, _25kop, _10kop, _5kop, _2kop, _1kop))
            {
                Console.WriteLine("Wrong arguments to Init!");
                return null;
            }
            else
            {
                return money;
            }

        }
    }
}