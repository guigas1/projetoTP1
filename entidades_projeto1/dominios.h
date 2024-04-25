#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDEDs

#include<string>
#include<stdexcept>

using namespace std;

class Dominio {
    private:
        virtual void validar(string) = 0;                   // Atributo para armazenar valor.                                                            // Método para validar valor.
    protected:
        string valor;
    public:
        void setValor(string);                              // Método para atribuir valor.
        string getValor() const;                            // Método para recuperar valor.
};

inline string Dominio::getValor() const{
    return valor;
}

class Pagamento: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Titulo: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class CPF: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Data: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Dinheiro: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Estado: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Nome: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Percentual: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Senha: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};

class Setor: public Dominio {
    private:
        void validar(string);
    public:
        void setValor(string);
};
#endif // DOMINIOS_H_INCLUDED
