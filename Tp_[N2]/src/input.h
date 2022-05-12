
#ifndef INPUT_H_
#define INPUT_H_


void get_cadena(char array[],char mje[]);
void get_cadenaMaxCaracteres(char array[],char mje[], int len);
int get_intMaxMin(char mje[], int maximo, int minimo);
char get_char(char mje[]);
void PedirArrayEnterosSinValidarInt(int array[],int size,char mje[]);
void PedirArrayMaximoMinimo(int vector[], int size, int maximo, int minimo, char mje[]);
void CargarArrayAleatorio(int array[],int size, char mje[]);
void CargarArrayAleatorioDifCero(int array[],int size, char mje[]);
void PrintearUnArrayInt(int array[], int size, char mje[]);
int get_intPositivo(char mje[]);
int get_int(char mje[]);
int get_anio(char mje[]);
int get_mes(char mje[]);
int get_dia(char mje[]);
float get_floatPositivo(char mje[]);
void OrdenamientoBurbujaMenorMayor(int vec[], int size);
void OrdenamientoBurbujaMayorMenor(int vec[], int size);





#endif /* INPUT_H_ */
