namespace Lab_1._3;

public class Money
{
    private int _500hrn { get; set; }
    private int _200hrn { get; set; }
    private int _100hrn { get; set; }
    private int _50hrn { get; set; }
    private int _20hrn { get; set; }
    private int _10hrn { get; set; }
    private int _5hrn { get; set; }
    private int _2hrn { get; set; }
    private int _1hrn { get; set; }

    private int _50kop { get; set; }
    private int _25kop { get; set; }
    private int _10kop { get; set; }
    private int _5kop { get; set; }
    private int _2kop { get; set; }
    private int _1kop { get; set; }

    public bool Init(int _500hrn, int _200hrn, int _100hrn, int _50hrn, int _20hrn, int _10hrn, int _5hrn, int _2hrn, int _1hrn, int _50kop, int _25kop, int _10kop, int _5kop, int _2kop, int _1kop)
    {
        if (_500hrn >= 0 && _200hrn >= 0 && _100hrn >= 0 && _50hrn >= 0 && _20hrn >= 0 && _10hrn >= 0 && _5hrn >= 0 && _2hrn >= 0 && _1hrn >= 0 && _50kop >= 0 && _25kop >= 0 && _10kop >= 0 && _5kop >= 0 && _2kop >= 0 && _1kop >= 0)
        {
            this._500hrn = _500hrn;
            this._200hrn = _200hrn;
            this._100hrn = _100hrn;
            this._50hrn = _50hrn;
            this._20hrn = _20hrn;
            this._10hrn = _10hrn;
            this._5hrn = _5hrn;
            this._2hrn = _2hrn;
            this._1hrn = _1hrn;
            this._50kop = _50kop;
            this._25kop = _25kop;
            this._10kop = _10kop;
            this._5kop = _5kop;
            this._2kop = _2kop;
            this._1kop = _1kop;
            return true;
        }
        else
        {
            Console.WriteLine("Error: Кількість не може бути від'ємною.");
            return false;
        }

    }
    public void Read()
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
            } while (!Init(_500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn, _50kop, _25kop, _10kop, _5kop, _2kop, _1kop));
        } while (ifCont);
    }
    public void Display()
    {
        Console.WriteLine("\n");
        Console.WriteLine("Список кількостей банкнот та монет:\n");
        Console.WriteLine($"Кількість банкнот по 500 грн.:  {_500hrn}");
        Console.WriteLine($"Кількість банкнот по 200 грн.:  {_200hrn}");
        Console.WriteLine($"Кількість банкнот по 100 грн.:  {_100hrn}");
        Console.WriteLine($"Кількість банкнот по 50 грн.:   {_50hrn}");
        Console.WriteLine($"Кількість банкнот по 20 грн.:   {_20hrn}");
        Console.WriteLine($"Кількість банкнот по 10 грн.:   {_10hrn}");
        Console.WriteLine($"Кількість банкнот по 5 грн.:    {_5hrn}");
        Console.WriteLine($"Кількість банкнот по 2 грн.:    {_2hrn}");
        Console.WriteLine($"Кількість банкнот по 1 грн.:    {_1hrn}");
        Console.WriteLine($"Кількість монет по 50 коп.:     {_50kop}");
        Console.WriteLine($"Кількість монет по 25 коп.:     {_25kop}");
        Console.WriteLine($"Кількість монет по 10 коп.:     {_10kop}");
        Console.WriteLine($"Кількість монет по 5 коп.:      {_5kop}");
        Console.WriteLine($"Кількість монет по 2 коп.:      {_2kop}");
        Console.WriteLine($"Кількість монет по 1 коп.:      {_1kop}");

    }
    public string toString()
    {
        string result = "";

        result += $"Кількість банкнот по 500 грн.: {_500hrn}\n";
        result += $"Кількість банкнот по 200 грн.: {_200hrn}\n";
        result += $"Кількість банкнот по 100 грн.: {_100hrn}\n";
        result += $"Кількість банкнот по 50 грн.: {_50hrn}\n";
        result += $"Кількість банкнот по 20 грн.: {_20hrn}\n";
        result += $"Кількість банкнот по 10 грн.: {_10hrn}\n";
        result += $"Кількість банкнот по 5 грн.: {_5hrn}\n";
        result += $"Кількість банкнот по 2 грн.: {_2hrn}\n";
        result += $"Кількість банкнот по 1 грн.: {_1hrn}\n";
        result += $"Кількість монет по 50 коп.: {_50kop}\n";
        result += $"Кількість монет по 25 коп.: {_25kop}\n";
        result += $"Кількість монет по 10 коп.: {_10kop}\n";
        result += $"Кількість монет по 5 коп.: {_5kop}\n";
        result += $"Кількість монет по 2 коп.: {_2kop}\n";
        result += $"Кількість монет по 1 коп.: {_1kop}";

        return result;
    }
    public double CalculateTotal()
    {
        double total = 0;

        total += _500hrn * 500;
        total += _200hrn * 200;
        total += _100hrn * 100;
        total += _50hrn * 50;
        total += _20hrn * 20;
        total += _10hrn * 10;
        total += _5hrn * 5;
        total += _2hrn * 2;
        total += _1hrn;

        total += _50kop * 0.5;
        total += _25kop * 0.25;
        total += _10kop * 0.1;
        total += _5kop * 0.05;
        total += _2kop * 0.02;
        total += _1kop * 0.01;

        return total;
    }

    public static Money Suma(Money money1, Money money2)
    {
        Money newMoney = new Money();

        newMoney._500hrn = money1._500hrn + money2._500hrn;
        newMoney._200hrn = money1._200hrn + money2._200hrn;
        newMoney._100hrn = money1._100hrn + money2._100hrn;
        newMoney._50hrn = money1._50hrn + money2._50hrn;
        newMoney._20hrn = money1._20hrn + money2._20hrn;
        newMoney._10hrn = money1._10hrn + money2._10hrn;
        newMoney._5hrn = money1._5hrn + money2._5hrn;
        newMoney._2hrn = money1._2hrn + money2._2hrn;
        newMoney._1hrn = money1._1hrn + money2._1hrn;

        newMoney._50kop = money1._50kop + money2._50kop;
        newMoney._25kop = money1._25kop + money2._25kop;
        newMoney._10kop = money1._10kop + money2._10kop;
        newMoney._5kop = money1._5kop + money2._5kop;
        newMoney._2kop = money1._2kop + money2._2kop;
        newMoney._1kop = money1._1kop + money2._1kop;

        return newMoney;

    }
    public static Money Subtract(Money money1, Money money2)
    {
        Money newMoney = new Money();

        newMoney._500hrn = money1._500hrn - money2._500hrn;
        newMoney._200hrn = money1._200hrn - money2._200hrn;
        newMoney._100hrn = money1._100hrn - money2._100hrn;
        newMoney._50hrn = money1._50hrn - money2._50hrn;
        newMoney._20hrn = money1._20hrn - money2._20hrn;
        newMoney._10hrn = money1._10hrn - money2._10hrn;
        newMoney._5hrn = money1._5hrn - money2._5hrn;
        newMoney._2hrn = money1._2hrn - money2._2hrn;
        newMoney._1hrn = money1._1hrn - money2._1hrn;

        newMoney._50kop = money1._50kop - money2._50kop;
        newMoney._25kop = money1._25kop - money2._25kop;
        newMoney._10kop = money1._10kop - money2._10kop;
        newMoney._5kop = money1._5kop - money2._5kop;
        newMoney._2kop = money1._2kop - money2._2kop;
        newMoney._1kop = money1._1kop - money2._1kop;

        return newMoney;
    }
    public Money MultiplyByDecimal(double multiplier)
    {
        Money newMoney = new()
        {
            _500hrn = (int)(_500hrn * multiplier),
            _200hrn = (int)(_200hrn * multiplier),
            _100hrn = (int)(_100hrn * multiplier),
            _50hrn = (int)(_50hrn * multiplier),
            _20hrn = (int)(_20hrn * multiplier),
            _10hrn = (int)(_10hrn * multiplier),
            _5hrn = (int)(_5hrn * multiplier),
            _2hrn = (int)(_2hrn * multiplier),
            _1hrn = (int)(_1hrn * multiplier),

            _50kop = (int)(_50kop * multiplier),
            _25kop = (int)(_25kop * multiplier),
            _10kop = (int)(_10kop * multiplier),
            _5kop = (int)(_5kop * multiplier),
            _2kop = (int)(_2kop * multiplier),
            _1kop = (int)(_1kop * multiplier)
        };

        return newMoney;
    }
}
