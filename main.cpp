#include "Serie.hpp"

int main(int argc, char const *argv[])
{
    Serie serieNavidenia;
    
    serieNavidenia.Imprimir();
    serieNavidenia.EncenderTodo();
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarCantidad(5);
    serieNavidenia.Imprimir();
    serieNavidenia.ApagarTodo();
    serieNavidenia.Imprimir();

    return 0;
}
