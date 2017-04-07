
/**brief sumar los numeros ingresados por el usuario
*
*\param x es el primerOperando
*\param y es el segundoOperando
*\return suma de los numeros ingresados
*
*/
float suma(float x, float y)
{
    float suma1;
    suma1= x+y;
  return suma1;
}
/**brief restar los numeros ingresados por el usuario
*
*\param x es el primerOperando
*\param y es el segundoOperando
*\return resta de los numeros ingresados
*
*/
float resta(float x, float y)
{
    float resta1;
    resta1= x-y;
  return resta1;
}

/**brief dividir los numeros ingresados por el usuario
*
*\param x es el primerOperando
*\param y es el segundoOperando
*\return division de los numeros ingresados
*
*/
float division(float x,float y)
{
    float division1;
    division1=x/y;
    return division1;
}

/**brief multiplicar los numeros ingresados por el usuario
*
*\param x es el primerOperando
*\param y es el segundoOperando
*\return multiplica de los numeros ingresados
*
*/
float multiplicacion(float x,float y)
{
    float multiplicacion1;
    multiplicacion1=x*y;
    return multiplicacion1;
}

/**brief hallar el factorial del primer numero ingresados por el usuario
*
*\param x es el primerOperando
*\return el factorial del primer numero ingresado
*
*/
int factorial2(int x)
{   int factorial1;
    if(x==1)
    {
     return 1;
    }
     else
    {
     factorial1=x* factorial2(x-1);
    }
    return (factorial1);
}
