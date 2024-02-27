#ifndef TRINOME_H_INCLUDED
#define TRINOME_H_INCLUDED

#include <wx/math.h>
#include <wx/string.h>

class Trinome
{
    public:
        Trinome();

        void Seta(double val) { a = val; }
        void Setb(double val) { b = val; }
        void Setc(double val) { c = val; }
        void SetisComplex(bool val) { isComplex = val; }
        wxString Getracine1() { return racine1; }
        wxString Getracine2() { return racine2; }

        void calculerRacines();

    protected:

    private:
        double a;
        double b;
        double c;
        bool isComplex;

        wxString racine1;
        wxString racine2;
};


#endif // TRINOME_H_INCLUDED
