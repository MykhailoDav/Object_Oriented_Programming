namespace Lab_1._3;

[TestFixture]
public class Tests
{
    [Test]
    public void Init_ValidArguments_ReturnsTrue()
    {

        // Arrange
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

        Money money = new Money();

        // Act
        var result = money.Init(_500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn, _50kop, _25kop, _10kop, _5kop, _2kop, _1kop);

        // Assert
        Assert.IsTrue(result);
    }

    [Test]
    public void Init_FirstValueGreaterThanSecond_ReturnsFalse()
    {
        // Arrange
        int _500hrn = -5;
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
        var money = new Money();

        // Act
        var result = money.Init(_500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn, _50kop, _25kop, _10kop, _5kop, _2kop, _1kop);

        // Assert
        Assert.IsFalse(result);
    }
}
