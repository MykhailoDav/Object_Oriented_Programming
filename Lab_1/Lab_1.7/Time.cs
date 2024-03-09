﻿namespace Lab_1._7;

public class Time
{
    public uint Hour { get; private set; }
    public uint Minute { get; private set; }
    public uint Second { get; private set; }

    public Time()
    {
    }
    public Time(uint seconds)
    {
        Hour = seconds / 3600;
        Minute = (seconds % 3600) / 60;
        Second = seconds % 60;
    }
    public Time(uint hour, uint minute, uint second)
    {
        Hour = hour;
        Minute = minute;
        Second = second;
    }

    public bool Init(uint hour, uint minute, uint second)
    {
        if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59)
        {
            Console.WriteLine("Invalid time format. Please use values within the range: hour[0-23], minute[0-59], second[0-59].");
            return false;
        }

        Hour = hour;
        Minute = minute;
        Second = second;
        return true;
    }
    public bool Init(string timeString)
    {
        string[] timeParts = timeString.Split(':');
        if (timeParts.Length != 3)
        {
            Console.WriteLine("Invalid time format. Please use 'hour:minute:second'.");
            return false;
        }

        if (!uint.TryParse(timeParts[0], out uint hour) || !uint.TryParse(timeParts[1], out uint minute) || !uint.TryParse(timeParts[2], out uint second))
        {
            Console.WriteLine("Invalid time format. Please use numeric values for hour, minute, and second.");
            return false;
        }
        Init(hour, minute, second);
        return true;
    }
    public bool Init(uint secondsFromMidnight)
    {
        uint hour = secondsFromMidnight / 3600;
        uint minute = (secondsFromMidnight % 3600) / 60;
        uint second = secondsFromMidnight % 60;

        return Init(hour, minute, second);
    }
    public bool Init(Time otherTime)
    {
        return Init(otherTime.Hour, otherTime.Minute, otherTime.Second);
    }
    public void Read()
    {
        Console.WriteLine("\nSelect the format:");
        Console.WriteLine("1. Initialize with numbers");
        Console.WriteLine("2. Initialize with string");
        Console.WriteLine("3. Initialize with seconds from midnight");
        Console.WriteLine("4. Initialize with default time");
        int Choice = int.Parse(Console.ReadLine());
        switch (Choice)
        {
            case 1:
                ReadHour();
                break;
            case 2:
                ReadString();
                break;
            case 3:
                ReadSecondsFromMidnight();
                break;
            case 4:
                ReadCopy();
                break;
        }
    }
    public void ReadHour()
    {
        uint hours;
        uint minutes;
        uint seconds;
        do
        {
            Console.WriteLine("Enter hours:");
            hours = uint.Parse(Console.ReadLine());
            Console.WriteLine("Enter minutes:");
            minutes = uint.Parse(Console.ReadLine());
            Console.WriteLine("Enter seconds:");
            seconds = uint.Parse(Console.ReadLine());
        } while (!Init(hours, minutes, seconds));
    }
    public void ReadString()
    {
        string input;
        do
        {
            Console.WriteLine("Enter time in the format 'hour:minute:second':");
            input = Console.ReadLine();
        } while (!Init(input));

    }
    public void ReadSecondsFromMidnight()
    {
        uint seconds;
        do
        {
            Console.WriteLine("Enter seconds from midnight:");
            seconds = uint.Parse(Console.ReadLine());
        } while (!Init(seconds));
    }
    public void ReadCopy()
    {
        Time timeCopy = new(0, 0, 0);
        Hour = timeCopy.Hour;
        Minute = timeCopy.Minute;
        Second = timeCopy.Second;
    }
    public void Display()
    {
        Console.Write($"Time:{Hour}:{Minute}:{Second}");
    }
    public uint DifferenceInSeconds(Time otherTime)
    {
        return (otherTime.ToSeconds() - ToSeconds());
    }
    public void AddSeconds(uint seconds)
    {
        uint totalSeconds = ToSeconds() + seconds;
        Hour = totalSeconds / 3600;
        Minute = (totalSeconds % 3600) / 60;
        Second = totalSeconds % 60;

        Hour %= 24; 
    }

    public void SubtractSeconds(uint seconds)
    {
        int totalSeconds = (int)ToSeconds() - (int)seconds;
        if (totalSeconds < 0)
        {
            totalSeconds += 24 * 60 * 60;
        }
        Hour = (uint)(totalSeconds / 3600);
        Minute = (uint)((totalSeconds % 3600) / 60);
        Second = (uint)(totalSeconds % 60);

        
    }

    public bool IsEqualTo(Time otherTime)
    {
        return ToSeconds() == otherTime.ToSeconds();
    }
    public uint ToSeconds()
    {
        return Hour * 3600 + Minute * 60 + Second;
    }
    public uint ToMinutes()
    {
        return (uint)Math.Round((double)ToSeconds() / 60);
    }
    public override string ToString()
    {
        return $"{Hour}:{Minute}:{Second}";
    }
}