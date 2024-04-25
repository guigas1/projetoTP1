#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "domonios.h"

class Conta {
private:
    Nome nome;
    CPF cpf;
    Senha senha;

public:
    void setNome(const Nome&);
    Nome getNome() const;
    void setCPF (const CPF&);
    CPF getCPF() const;
    void setSenha(const Senha&);
    Senha getSenha() const;
};
inline void Conta:: setNome(const Nome & nome){
    this -> nome = nome;

}
inline Nome Conta ::getNome() const {
    return nome;
}

inline void Conta::setCPF(const CPF & cpf){
    this -> cpf = cpf;
}

inline CPF Conta::getCPF()const {
    return cpf;
}

inline void Conta:: setSenha(const Senha&senha){
    this -> senha = senha;
}

inline Senha Conta :: getSenha() const {
    return senha;
}

class Titulo {
private:
    CodigoT titulo; //COdigoT = Codigo de Titulo
    NomeE emissor; //NomeE = Nome do Emissor
    Emissao data;
    Setor setor;
    Data vencimento
    Valor dinheiro;

public:
    void setCodigoT (const CodigoT&);
    CodigoT getCodigoT() const;
    void setNomeE (const NomeE&);
    NomeE getNomeE() const;
    void setEmissao (const Emissao&);
    Emissao getEmissao() const;
    void setSetor (const Setor&);
    Setor getSetor() const;
    void setData (const Data&);
    Data getData() const;
    void setValor (const Valor&);
    Valor getValor() const;
};

inline void Titulo:: setCodigoT (const CodigoT & Titulo){
    this -> titulo = titulo;
}
inline CodigoT Titulo :: getCodigoT() const{
    return titulo;
}

inline void Titulo :: setNomeE (const NomeE & emissor) {
    this -> emissor = emissor
}
inline NomeE Titulo :: getNomeE() const {
    return emissor;
}

inline void Titulo :: setEmissao (const Emissao & data) {
    this -> emissao = emissao;
}
inline  Emissao Titulo :: getEmissao() const {
    return emissao;
}

inline void Titulo :: setSetor (const Setor & setor) {
    this -> setor = setor;
}
inline Setor Titulo :: getSetor() const {
    return setor;
}

inline void Titulo :: setData (const Data & vencimento){
    this -> vencimento = vencimento;
}
inline Data Titulo :: getData() const {
    return vencimento;
}

inline void Titulo :: setValor (const Valor & dinheiro) {
    this -> dinheiro = dinheiro;
}
inline Valor Titulo :: getTitulo() const {
    return dinheiro;
}

class Pagamento {
private:
    CodigoP pagamento; //CodigoP = Codigo de Pagamento.
    Data data;
    Percentual percentual;
    Estado estado;

public:
    void setCodigoP (const CodigoP&);
    CodigoP getCodigoP() const;
    void setData (const Data&);
    Data getData()const;
    void setPercentual (const Percentual&);
    Percentual getPercentual()const;
    void setEstado (const Estado&);
    Estado getEstado() const;
};

inline void Titulo :: setCodigoP (const CodigoP & pagamento) {
    this -> pagamento = pagamento;
}
inline CodigoP titulo :: getCodigoP() const {
    return pagamento;
}

inline void Titulo :: setData (const Data & data){
    this -> data = data;
}
inline Percentual Titulo :: getData() const {
    return data;
}

inline void Titulo :: setPercentual (const Percentual & percentual){
    this -> percentual = percentual;
}
inline Percentual Titulo :: getPercentual() const{
    return percentual;
}
inline void Titulo :: setEstado (const Estado & estado) {
    this -> estado = estado;
}
inline Estado Titulo :: getEstado() const {
    return estado;
}
#endif // ENTIDADES_HPP_INCLUDED
