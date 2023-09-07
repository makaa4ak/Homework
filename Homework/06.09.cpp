#include <iostream>
using namespace std;

class Fraction
{
private:
    int setdenom1;
    int setdenom2;
    int bol;
    int numerator_stock;
    int denominator_stock;


    int numerator;
    int denominator;


public:
    void init(int num1, int num2)
    {
        numerator = num1;
        denominator = num2;
    }


    Fraction sum(Fraction sm)
    {
        Fraction SUM;
        bol = 0;

        for (int i = 1; bol < 1; i++)
        {
            if (i % sm.denominator == 0 && i % denominator == 0)
            {
                setdenom1 = i / denominator;
                setdenom2 = i / sm.denominator;

                SUM.denominator = i;

                numerator_stock = numerator * setdenom1;
                SUM.numerator = sm.numerator * setdenom2;

                SUM.numerator = SUM.numerator + numerator_stock;


                bol = 1;
            }
        }

        cout << "Sum fraction:\n" << SUM.numerator << endl << "--" << endl << SUM.denominator << endl << endl << endl;
        return SUM;


    }

    Fraction Factor(Fraction fact)
    {

        Fraction FACT;

        FACT.numerator = numerator * fact.denominator;
        FACT.denominator = denominator * fact.numerator;

        cout << "Factor fraction:\n" << FACT.numerator << endl << "--" << endl << FACT.denominator << endl << endl << endl;
        return FACT;

    }

    Fraction Minus(Fraction min)
    {
        Fraction MIN;
        bol = 0;

        for (int i = 1; bol < 1; i++)
        {
            if (i % min.denominator == 0 && i % denominator == 0)
            {
                setdenom1 = i / denominator;
                setdenom2 = i / min.denominator;

                MIN.denominator = i;

                numerator_stock = numerator * setdenom1;
                MIN.numerator = min.numerator * setdenom2;

                MIN.numerator = numerator_stock - MIN.numerator;


                bol = 1;
            }
        }

        cout << "Minus fraction:\n" << MIN.numerator << endl << "--" << endl << MIN.denominator << endl << endl << endl;
        return MIN;

    }

    Fraction Division(Fraction divis)
    {

        Fraction DIVIS;

        numerator_stock = divis.numerator;
        divis.numerator = divis.denominator;
        divis.denominator = divis.numerator;

        DIVIS.numerator = numerator * divis.denominator;
        DIVIS.denominator = denominator * divis.numerator;

        cout << "Division fraction:\n" << DIVIS.numerator << endl << "--" << endl << DIVIS.denominator << endl << endl << endl;
        return DIVIS;

    }




    void Print()
    {
        cout << "fraction : \n" << numerator << endl << "--" << endl << denominator << endl << endl << endl;
    }



    void setNumerator(int num)
    {
        numerator = num;
    }
    void setDenominator(int num)
    {
        if (num != 0)
        {
            denominator = num;
        }
    }
    int getNumerator()
    {
        return numerator;
    }
    int getDenominator()
    {
        return denominator;
    }
};

int main()
{
    system("chcp 1251");
    Fraction a;

    a.init(3, 2);
    a.Print();

    Fraction sm;
    sm.init(3, 4);
    a.sum(sm);

    Fraction FACT;
    FACT.init(3, 4);
    a.Factor(FACT);


    Fraction MIN;
    MIN.init(3, 10);
    a.Minus(MIN);

    Fraction DIVIS;
    DIVIS.init(3, 10);
    a.Division(DIVIS);


}