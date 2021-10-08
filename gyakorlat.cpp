struct Gyakorlat {
    int max_letszam;
    int aktualis_letszam;
};

 Gyakorlat operator&(const Gyakorlat& gy1, const Gyakorlat& gy2){
     Gyakorlat gy3;

     if (gy1.max_letszam > gy2.max_letszam){
         gy3.max_letszam = gy1.max_letszam;
     } else {
         gy3.max_letszam = gy2.max_letszam;
     }
     gy3.aktualis_letszam = gy1.aktualis_letszam + gy2.aktualis_letszam;
     return gy3;
}
/*
 struct Gyakorlat {
    int max_letszam;
    int aktualis_letszam;
};

Gyakorlat operator&(const Gyakorlat& gy1, const Gyakorlat& gy2) {
    return {gy1.max_letszam > gy2.max_letszam ? gy1.max_letszam : gy2.max_letszam, gy1.aktualis_letszam + gy2.aktualis_letszam};
}
 */
