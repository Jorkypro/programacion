// Creado por Jorky_Proaño
# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;
 
// Prototipo de la función
void  calcularEdad ( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
 
int  principal ()
{
    int anioAct;  // Año Real
    int mesAct; // Tiempo actual
    int fechAct; // Fecha actual
 
    anioNac int ; // año nacimiento
    int mesNac; // Mes nacimiento
    int fechNac; // fecha nacimiento
 
    cout << " \n\t Programa que calcula la Edad, Mes y Dia \n\n " ;
    cout << " Ingreso Ano Real: " ; cin >> anioAct;
    cout << " Ingreso Mes Actual: " ; cin >> mesAct;
    cout << " Ingreso Fecha Actual: " ; cin >> fechAct;
 
    cout << " \n Ingrese Año Nacimiento: " ; cin >> anioNac;
    cout << " Ingrese Mes de Nacimiento: " ; cin >> mesNac;
    cout << " Ingreso Fecha de Nacimiento: " ; cin >> fechNac;
 
    calcularEdad ( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
 
    devolver  0 ;
}
 
// Definición de la Función
void  calcularEdad ( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;
 
    if (fechAct < fechNac)
    {    // En caso de ser menor la fecha actual que el nacimiento
        fechAct = fechAct + 30 ; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1 ; // Se le resta un mes (30 días) al mes actual
        respFech = fechAct - fechNac; // Se le resta fecha nacimiento al actual
    }
    else  // En caso de ser mayor la fecha actual que el nacimiento
        respFech = fechAct - fechNac;  // Se le resta fecha nacimiento al actual
 
    if (mesAct < mesNac)
    {    // En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12 ; // Se le suma los 12 meses (1 año) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mesAct - mesNac; // Se le resta el año nacimiento al actual
    }
    else  // En caso de ser mayor el mes actual que el nacimiento
        respMes = mesAct - mesNac; // Se le resta el año nacimiento al actual
 
    cout << " \n Ud. tiene: \n " ;
    cout << " Edad: " <<anioAct - anioNac << endl; // Muestra edad
    cout << " Mes: " << respMes << endl; // Muestrame
    cout << " Dia: " << respFech << endl; // Muestra dia
    devolver  0 ;
}
