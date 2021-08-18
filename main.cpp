#include <iostream>
#include <iomanip>

#include "Imovel.hpp"
#include "Casa.hpp"
#include "Cobertura.hpp"
#include "Apartamento.hpp"
#include "Cliente.hpp"

int main() {
    
    Cliente cl1;
    cl1.nome = "Xayso Sovon Ziahaka";
    cl1.endereco = "Rua Xangrilá - Braúnas";
    cl1.cidade = "Belo Horizonte";
    cl1.uf = "MG";
    cl1.cep = "31365-570";
    cl1.telefone = "3196007958";
    
    Cliente cl2;
    cl2.nome = "Minia Pasies Kituos";
    cl2.endereco = "Rua dos Jacobinos - Ouro Minas";
    cl2.cidade = "Belo Horizonte";
    cl2.uf = "MG";
    cl2.cep = "31870-290";
    cl2.telefone = "3197627067";
    
    Cliente cl3;
    cl3.nome = "Vuocue Leiur Baonauza";
    cl3.endereco = "Rua Orminda de Almeida - Tupi banheiros";
    cl3.cidade = "Belo Horizonte";
    cl3.uf = "MG";
    cl3.cep = "31842-630";
    cl3.telefone = "3195949327";
    
    Cliente cl4;
    cl4.nome = "Zerer Huduy Fyogar";
    cl4.endereco = "Rua Taquartosuaril - Jonas Veiga";
    cl4.cidade = "Belo Horizonte";
    cl4.uf = "MG";
    cl4.cep = "30285-422";
    cl4.telefone = "3198596327";
    
    Cliente cl5;
    cl5.nome = "Ceziel Mioti Pler";
    cl5.endereco = "Rua João Gualberto Costa - Serrano";
    cl5.cidade = "Belo Horizonte";
    cl5.uf = "MG";
    cl5.cep = "30882-747";
    cl5.telefone = "3196274465";
    
    Cliente cl6;
    cl6.nome = "Esxo Cilal Zyais";
    cl6.endereco = "Rua Américo Luiz Moreira - Jardim dos Comerciários (Venda Nova)";
    cl6.cidade = "Belo Horizonte";
    cl6.uf = "MG";
    cl6.cep = "31650-560";
    cl6.telefone = "3195004414";
    
    Cliente cl7;
    cl7.nome = "Leova Wikyecil Neaca";
    cl7.endereco = "Rua João Arantes - cidade Nova";
    cl7.cidade = "Belo Horizonte";
    cl7.uf = "MG";
    cl7.cep = "31170-240";
    cl7.telefone = "3198461192";
    
    Cliente cl8;
    cl8.nome = "Teas Heimeu Pipe";
    cl8.endereco = "Rua Maria Pereira Damasceno - Ernesto do Nascimento(Barreiro)";
    cl8.cidade = "Belo Horizonte";
    cl8.uf = "MG";
    cl8.cep = "30668-430";
    cl8.telefone = "3197317802";

    int quartostdeA = 0;
    int quartostdeCa = 0;
    int quartostdeCb = 0;

    Apartamento ap1;
    ap1.corretor = "Tuoruars";
    ap1.area = 55.4;
    ap1.quartos = 2;
    ap1.banheiros = 1;
    ap1.vagas = 0;
    ap1.valorDeVendam2 = 987.0;
    ap1.comissao = ap1.comissao();
    ap1.valorDeVenda = ap1.calculaValorDeVenda() + ap1.comissao();
    ap1.vendedor = cl1;
    quartostdeA++;

    Apartamento ap2;
    ap2.corretor = "Fyubyeis";
    ap2.area = 74.5;
    ap2.quartos = 2;
    ap2.banheiros = 1;
    ap2.vagas = 2;
    ap2.valorDeVendam2 = 1540.0;
    ap2.comissao = ap2.comissao();
    ap2.valorDeVenda = ap2.calculaValorDeVenda() + ap2.comissao();
    ap2.vendedor = cl2;
    quartostdeA++;

    Apartamento ap3;
    ap3.corretor = "Kelia";
    ap3.area = 87.2;
    ap3.quartos = 3;
    ap3.banheiros = 2;
    ap3.vagas = 2;
    ap3.valorDeVendam2 = 2354.0;
    ap3.comissao = ap3.comissao();
    ap3.valorDeVenda = ap3.calculaValorDeVenda() + ap3.comissao();
    ap3.vendedor = cl3;
    quartostdeA++;

    // Cobertura
    Cobertura cb1;
    cb1.corretor = "Koci";
    cb1.area = 120.1;
    cb1.quartos = 3;
    cb1.banheiros = 3;
    cb1.vagas = 2;
    cb1.valorDeVendam2 = 3123.5;
    cb1.comissao = cb1.comissao();
    cb1.valorDeVenda = cb1.calculaValorDeVenda() + cb1.comissao();
    cb1.vendedor = cl4;
    quartostdeCb++;
    
    Cobertura cb2;
    cb2.corretor = "Wail";
    cb2.area = 134.8;
    cb2.quartos = 4;
    cb2.banheiros = 3;
    cb2.vagas = 3;
    cb2.valorDeVendam2 = 3578.2;
    cb2.comissao = cb2.comissao();
    cb2.valorDeVenda = cb2.calculaValorDeVenda() + cb2.comissao();
    cb2.vendedor = cl5;
    quartostdeCb++;

    Cobertura cb3;
    cb3.corretor = "Fival";
    cb3.area = 180.0;
    cb3.quartos = 4;
    cb3.banheiros = 4;
    cb3.vagas = 4;
    cb3.valorDeVendam2 = 4165.7;
    cb3.comissao = cb3.comissao();
    cb3.valorDeVenda = cb3.calculaValorDeVenda() + cb3.comissao();
    cb3.vendedor = cl6;
    quartostdeCb++;

    // Casas
    Casa ca1;
    ca1.corretor = "Beydo";
    ca1.area = 145.6;
    ca1.quartos = 3;
    ca1.banheiros = 3;
    ca1.vagas = 2;
    ca1.valorDeVendam2 = 4023.6;
    ca1.comissao = ca1.comissao();
    ca1.valorDeVenda = ca1.calculaValorDeVenda() + ca1.comissao();
    ca1.vendedor = cl7;
    quartostdeCa++;

    Casa ca2;
    ca2.corretor = "Riuzi";
    ca2.area = 245.0;
    ca2.quartos = 5;
    ca2.banheiros = 4;
    ca2.vagas = 4;
    ca2.valorDeVendam2 = 4856.2;
    ca2.comissao = ca2.comissao();
    ca2.valorDeVenda = ca2.calculaValorDeVenda() + ca2.comissao();
    ca2.vendedor = cl8;
    quartostdeCa++;

    std::cout << "\n>> Relatório de Imóveis <<" << endl;

    double valorDeVendaAp = 0.0;
    double valorDeVendaCb = 0.0;
    double valorDeVendaCa = 0.0;
    double comissAp = 0.0;
    double comissCb = 0.0;
    double comissCa = 0.0;
    
    ap1.print();
    valorDeVendaAp += ap1.calculaValorDeVenda();
    comissAp += ap1.comissao();
    std::cout << endl;

    ap2.print();
    valorDeVendaAp += ap2.calculaValorDeVenda();
    comissAp += ap2.comissao();
    std::cout << endl;

    ap3.print();
    valorDeVendaAp += ap3.calculaValorDeVenda();
    comissAp += ap3.comissao();
    std::cout << endl;

    cb1.print();
    valorDeVendaCb += cb1.calculaValorDeVenda();
    comissCb += cb1.comissao();
    std::cout << endl;

    cb2.print();
    valorDeVendaCb += cb2.calculaValorDeVenda();
    comissCb += cb2.comissao();
    std::cout << endl;

    cb3.print();
    valorDeVendaCb += cb3.calculaValorDeVenda();
    comissCb += cb3.comissao();
    std::cout << endl;

    ca1.print();
    valorDeVendaCa += ca1.calculaValorDeVenda();
    comissCa += ca1.comissao();
    std::cout << endl;

    ca2.print();
    valorDeVendaCa += ca2.calculaValorDeVenda();
    comissCa += ca2.comissao();
    std::cout << endl;

    std::cout << "\n>> Resumo Geral <<" << endl;

    std::cout << "\n>>Apartamentos<<\n"
        << "\n quartosuantidade: " << quartostdeA
        << "\n valorDeVenda Total: R$ " << fixed << setprecision(2) << valorDeVendaAp
        << "\n Comissão Total: R$" << comissAp
        << endl
        << "\n>>Coberturas<<\n"
        << "\n quartosuantidade: " << quartostdeCb
        << "\n valorDeVenda Total: R$ " << fixed << setprecision(2) << valorDeVendaCb
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCb
        << endl
        << "\n>>Casas<<\n"
        << "\n quartosuantidade: " << quartostdeCa
        << "\n valorDeVenda Total: R$ " << fixed << setprecision(2) << valorDeVendaCa
        << "\n Comissão Total: R$ " << fixed << setprecision(2) << comissCa
        << endl;
}
