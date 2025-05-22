#include <iostream>
#include <fstream>

namespace std;

class pessoa{
    private:
        int codigo;
        int cpf[12];
        string nome;
        string email;
        string telefone;
        string whatsapp;
};

class secretaria : public pessoa{
    private:
        string login;
        string senha;
        small int cargo; // 0 - secretária, 1 - secretária-supervisora

    void setLogin(string loginin){
        login = loginin;
    }
    void setSenha(string senhain){
        senha = senhain;
    }
};

class medico : public pessoa{

};

class paciente : public pessoa{

};