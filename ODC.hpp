#include <iostream>
#include <string>

using namespace std;


class ODC {

    private:

        int day, month;
        string lesson;
        string descript;
    
    public:
        //lê o arquivo, cria objetos e coloca na lista
        void read_arch();

        //organiza os objetos da lista em ordem da data
        void organize();
};