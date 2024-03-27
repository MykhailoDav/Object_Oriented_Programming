class C {
private:
    int x;

public:
    C() : x(0) {}

    C(int value) : x(value) {}

    friend C operator-(int i, const C& c) {
        C temp;
        temp.x = i - c.x;
        return temp;
    }
};