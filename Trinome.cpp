#include "Trinome.h"

Trinome::Trinome() // Constructeur par defaut
{
    //ctor
    a=b=c=0.0;
    isComplex=false;
    racine1.Printf("---");
    racine2.Printf("---");
}

void Trinome::calculerRacines()
{
    double delta=b*b-4*a*c;

    if (delta > 0.0) {
        racine1.Printf("%.3f",(-b+sqrt(delta))/(2.0*a));
        racine2.Printf("%.3f",(-b-sqrt(delta))/(2.0*a));
    }
    else
        if (delta < 0.0) {
            if (isComplex==false) {
                // ++ Dialog Box
                wxMessageBox(_("Racines complexes !"), _("ERREUR !"));

                racine1.Printf("---");
                racine2.Printf("---");
            }
            else {
                racine1.Printf("%.3f + i %.3f",(-b)/(2.0*a),sqrt(-delta)/(2.0*a));
                racine2.Printf("%.3f - i %.3f",(-b)/(2.0*a),sqrt(-delta)/(2.0*a));
            }
        }
        else {
            // racine double: ++ Dialog Box
            wxMessageBox(_("Racines doubles !"), _("RESULTATS"));

            racine1.Printf("%.3f",(-b)/(2.0*a));
            racine2=racine1;
        }
}
