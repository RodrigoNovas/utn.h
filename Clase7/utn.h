#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int buscarNombre(char *pNombre,
                 char lista[][56],
                 int len,
                 int* pIndex);
int buscarLibre(char lista[][56],int len,int* pIndex);

//a partir de esta funcion puedo crear muchas otras de validacion
int utn_isValidIntNumber(char* pCadena);

int utn_getNumber  (int *pResultado,
                    char *msj,
                    char *msjError,
                    int minimo,
                    int maximo,
                    int reintentos);

int utn_getString  (char *pResultado,
                    char *msj,
                    char *msjError,
                    int minimo,
                    int maximo,
                    int reintentos);


#endif // UTN_H_INCLUDED
